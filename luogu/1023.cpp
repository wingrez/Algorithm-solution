#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
const int MAXN=100000;

int expect_price; //预期价格 
int expect_sales; //预期效率 
int price[MAXN]; //价格数组 
int sales[MAXN]; //销量数组 
int decline; //超过最高价之后的单位减少销量 
int cnt; //price和sales数组的计数器 

int main(){
	scanf("%d", &expect_price);
	int d1, d2;
	int pre_d1=0, pre_d2=0, k=0; 
	while(scanf("%d%d", &d1, &d2) && d1!=-1){
		if(pre_d1 && pre_d1+1!=d1){ //推算两个相邻已知价格间的未知价格的销量 
			k=(d2-pre_d2)/(d1-pre_d1); //比值，即价格每涨高1元，销量减少k
			while(++pre_d1<d1){
				pre_d2+=k;
				price[cnt]=pre_d1; sales[cnt]=pre_d2; ++cnt;
				if(pre_d1==expect_price) expect_sales=pre_d2; //记录预期销量 
			}
		} 
		if(d1==expect_price) expect_sales=d2;
		price[cnt]=d1; sales[cnt]=d2; ++cnt;
		pre_d1=d1; pre_d2=d2;
	}
	scanf("%d", &decline);
	
	//推算大于已知最高价的其他价格的销量
	int now_price=price[cnt-1]+1;
	int now_sales=sales[cnt-1]-decline;
	while(now_sales>0){
		if(now_price==expect_price) expect_sales=now_sales; 
		price[cnt]=now_price; sales[cnt]=now_sales; ++cnt;
		now_price+=1; now_sales-=decline;
	}
	
	double left=-MAXN, right=MAXN; //满足条件的左右端点 
	for(int i=0; i<cnt; ++i){
		if(expect_sales-sales[i]>0){
			left=max(left, ((price[i]-price[0])*sales[i]-(expect_price-price[0])*expect_sales)*1.0/(expect_sales-sales[i]));
		}
		else if(expect_sales-sales[i]<0){
			right=min(right, ((price[i]-price[0])*sales[i]-(expect_price-price[0])*expect_sales)*1.0/(expect_sales-sales[i])); 
		}
	}
	
	if(left>right) printf("NO SOLUTION\n");
	else{
		if(left>=0) printf("%d\n", (int)ceil(left));
		else if(right<=0) printf("%d\n", (int)floor(right));
		else printf("0\n");
	}
	return 0;
}
