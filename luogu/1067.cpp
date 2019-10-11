#include<cstdio>
#include<cmath>

int n;

int main(){
	scanf("%d", &n);
	
	int val;
	int flag=0; 
	for(int i=n; i>=0; --i){
		scanf("%d", &val);
		if(val>0 && flag!=0) printf("+");
		else if(val<0) printf("-");
		else if(val==0) continue;
		if(!(val==1 || val==-1) && i!=0 || i==0) printf("%d", abs(val));
		if(i>0) printf("x");
		if(i>1) printf("^%d", i);
		flag=1;
	}
	if(flag==0) printf("0");
	printf("\n");
	
	return 0;
}
