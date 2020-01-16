#include<cstdio>
#include<cctype>
#include<stack>
using namespace std;

int operate(int A, char op, int B){
	switch(op){
		case '+': return A+B;
		case '-': return A-B;
		case '*': return A*B;
		case '/': return A/B;
	}
}

int main(){
	char ch;
	int num=0;
	stack<int> stk;
	while((ch=getchar())!='@'){
		if(isdigit(ch)){
			num=num*10+ch-'0';
		}
		else if(ch=='.'){
			stk.push(num);
			num=0;
		}
		else if(ch=='+' || ch=='-' || ch=='*' || ch=='/'){
			int B=stk.top(); stk.pop();
			int A=stk.top(); stk.pop();
			stk.push(operate(A,ch,B));
		}
	}
	printf("%d\n", stk.top());
	return 0;
}
