#include<cstdio>
#include<cmath>
#include<stack>
using namespace std;

stack<int> wh; //栈中只需要存放当前仓库最大值 
int N, weight;

int main(){
	scanf("%d", &N);
	wh.push(0);
	while(N--){
		int flag;
		scanf("%d", &flag);
		if(flag==0){
			scanf("%d", &weight);
			wh.push(max(weight, wh.top()));
		}
		else if(flag==1){
			if(wh.size()>1) wh.pop();
		}
		else if(flag==2){
			printf("%d\n", wh.top());
		}
	}
	return 0;
}
