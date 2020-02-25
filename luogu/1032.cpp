#include<iostream>
#include<string>
#include<queue>
using namespace std;

struct Node{
	string str;
	int cnt;
	Node(string _str="", int _cnt=0){
		str=_str; cnt=_cnt;
	}
};

string A, B;
string ma[6], mb[6];
int num;
queue<Node> que;

int main(){
	string a, b;
	cin>>A>>B;
	while(cin>>a>>b){
		ma[num]=a;
		mb[num]=b;
		num++;
	}
	
	int flag=0;
	Node cur, tmp;
	que.push(Node(A, 0));
	
	if(A==B) goto found;
	
	while(!que.empty()){
		cur=que.front(); que.pop();
		for(int i=0; i<num; ++i){
			int pos=0;
			while((pos=cur.str.find(ma[i], pos))!=string::npos){
				tmp=cur;
				tmp.str.replace(pos, ma[i].length(), mb[i]);
				tmp.cnt++;
				if(tmp.str==B){
					flag=tmp.cnt;
					goto found;
				}
				if(tmp.cnt<10)
					que.push(tmp);
				pos++;
			}
		}
	}
	
	if(flag==0){
		cout<<"NO ANSWER!"<<endl;
		return 0;
	}
	
	found:
		cout<<flag<<endl;
		return 0;
	
}
