#include<iostream>
#include<sstream>
#include<stack>
#include<set>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int L;
		string comp; //输入的时间复杂度 
		int ans=0; //实际的复杂度幂次，即n^ans 
		int err=0; //错误标志
		
		string str, i, x, y;
		stack<string> cs, is; //cs循环嵌套标志、is变量栈 
		stack<int> level; //循环层级
		set<string> has_i; //查询变量是否已经存在 
		
		cin>>L>>comp;
		level.push(0); //初始幂次为0 
		
		while(L--){
			cin>>str;
			if(str=="F"){
				cin>>i>>x>>y;
				if(!err && has_i.find(i)==has_i.end()){ //变量名不冲突 
					cs.push("F"); is.push(i); has_i.insert(i); 
					if(x=="n" && y!="n"){ // n、数字
						level.push(-1);   //-1表示该循环体无效 
					} 
					else if(x!="n" && y=="n"){ // 数字、n 
						if(level.top()!=-1){ //如果上一层幂次不为-1，则幂次+1 
							level.push(level.top()+1);
							ans=max(ans, level.top());
						}
						else level.push(-1); //如果上一层幂次为-1, 则这一层的幂次同样为-1 
					}
					else if(x!="n" && y!="n"){ //数字、数字 
						if(stoi(x)<=stoi(y)) level.push(level.top()); //x<=y 幂次不变 
						else level.push(-1); //x>y 该循环体无效 
					}
					else{ // n、n 
						level.push(level.top());
					}
				}
				else err=1; //变量名冲突 
			}
			else if(!err && str=="E"){ //一个循环体结束 
				if(!cs.empty() && cs.top()=="F"){
					cs.pop(); has_i.erase(is.top()); is.pop(); //这一层嵌套结束，销毁变量 
					level.pop(); //回到上一层 
				}
				else err=1; //语法错误 
			}
		} 
		
		if(err || !cs.empty()) cout<<"ERR"<<endl;
		else if(ans==0 && comp=="O(1)" || ans>0 && comp=="O(n^"+to_string(ans)+")") cout<<"Yes"<<endl;
		else cout<<"No"<<endl; 
	}
	return 0;
}
