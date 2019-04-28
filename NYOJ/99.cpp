#include<cstdio>
#include<cstring>
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

struct Word{
	string str;
	bool vis;
	Word(string str):str(str),vis(false){}
	bool operator < (const Word &rhs) const{
		return str<rhs.str;
	}
}; 

vector<Word> word[26];
vector<string> dragon; //生成的拼接 
int set[26]; //并查集，用于判断连通性 
int in[26], out[26]; //入度和出度 
int N, M;
 
//并查集 
int find(int v){
	while(v!=set[v]) v=set[v];
	return v;
}

void join(int u, int v){
	int ra=find(u);
	int rb=find(v);
	if(ra==rb) return;
	set[ra]=rb;
}

//判断连通 
bool is_connected(){
	//加入连通分量 
	for(int i=0;i<26;i++){
		for(int j=0;j<word[i].size();j++){
			string str=word[i][j].str;
			join(str[0]-'a', str[str.size()-1]-'a');
		}
	}
	//判断所有的单词是否有相同的根节点 
	int root=-1;
	for(int i=0;i<26;i++){
		for(int j=0;j<word[i].size();j++){
			string str=word[i][j].str;
			if(root==-1) root=find(str[0]-'a');
			if(find(str[0]-'a')!=root) return false;
		}
	}
	return true;
}

//判断度数 
bool is_euler(int &s, int &e){
	s=e=-1; 
	for(int i=0;i<26;i++){
		if(in[i]!=out[i]){
			if(in[i]+1==out[i]){
				if(s!=-1) return false;
				s=i;
			}
			else if(in[i]==out[i]+1){
				if(e!=-1) return false;
				e=i;
			}
			else return false;
		}
	}
	return true;
}

//深度优先搜索 
bool dfs(int s){
	if(dragon.size()==M) return true;
	for(int i=0;i<word[s].size();i++){
		if(word[s][i].vis==false){
			string str=word[s][i].str;
			dragon.push_back(str);
			word[s][i].vis=true;
			if(dfs(str[str.size()-1]-'a')==true) return true;
			word[s][i].vis=false;
			dragon.erase(dragon.end()-1);
		}
	}
	return false;
}

int main(){
	scanf("%d",&N);
	while(N--){
		memset(set, 0, sizeof(set));
		memset(in, 0, sizeof(in));
		memset(out, 0, sizeof(out));
		for(int i=0;i<26;i++) word[i].clear();
		dragon.clear();
		
		string str;
		scanf("%d",&M);
		for(int i=0;i<M;i++){
			cin>>str;
			word[str[0]-'a'].push_back(Word(str));
			set[str[0]-'a']=str[0]-'a';
			in[str[str.size()-1]-'a']++; //入度
			out[str[0]-'a']++; //出度 
		}
		
		//排序 
		for(int i=0;i<26;i++) sort(word[i].begin(), word[i].end());
		
		//判断能否构成欧拉图 
		int s, e; //s的入度+1==s的出度。e的入度==e的出度+1。s作为起点。 
		if(is_connected()==false || is_euler(s,e)==false){
			cout<<"***"<<endl;
			continue;
		}
		
		if(s==-1){ //如果没有找到起点，那从第一个不为空的开始 
			for(int i=0;i<26;i++){
				if(in[i]!=0){
					dfs(i);
					break;
				}
			}
		}
		else dfs(s); //找到起点，那从起点开始 
		
		for(int i=0;i<dragon.size();i++){
			if(i!=0) cout<<".";
			cout<<dragon[i];
		}
		cout<<endl;
	}
	return 0;
}
