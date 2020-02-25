#include<iostream>
#include<string>
using namespace std;

const int MAXN=22;
int n;
string strs[MAXN];
char ch;
int vis[MAXN];
int ans;

void dfs(string s, int cnt){
	if(cnt>ans) ans=cnt;
	for(int i=0; i<n; ++i){
		if(vis[i]<2){
			int l1=s.length(), l2=strs[i].length();
			int j;
			for(j=1; j<l1 && j<l2; ++j){
				if(s.substr(l1-j)==strs[i].substr(0,j))
					break;
			}
			if(j<l1 && j<l2){
				cnt+=(l2-j);
				vis[i]++;
				dfs(strs[i], cnt);
				vis[i]--;
				cnt-=(l2-j);
			}
		}
	}
}

int main(){
	cin>>n;
	for(int i=0; i<n; ++i){
		cin>>strs[i];
	}
	cin>>ch;
	for(int i=0; i<n; ++i){
		if(strs[i][0]==ch){
			vis[i]++;
			dfs(strs[i], strs[i].length());
			vis[i]--;
		}
	}
	cout<<ans<<endl;
	return 0;
}
