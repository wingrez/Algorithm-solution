#include<cstdio>
#include<queue>
#include<set>
using namespace std;

int M, N;
queue<int> words;
set<int> mem_exist;
int word_cnt;

int main(){
	scanf("%d%d", &M, &N);
	int val, ans=0;
	for(int i=0; i<N; ++i){
		scanf("%d", &val);
		if(mem_exist.find(val)==mem_exist.end()){ //内存中不存在
			if(word_cnt==M){ //内存已满
				int t=words.front(); words.pop();  
				mem_exist.erase(t);
			}
			else ++word_cnt;
			words.push(val);
			mem_exist.insert(val); 
			++ans; 
		}
	}
	printf("%d\n", ans);
	return 0;
}

