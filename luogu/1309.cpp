#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Player{
	int no;
	int s;
	int w;
	bool operator < (const Player &rhs) const {
		if(s==rhs.s) return no<rhs.no; 
		return s>rhs.s;
	}
};

int N, R, Q;
int s, w;
vector<Player> vec;

void merge(vector<Player> &win, vector<Player> &lose){
	int i=0, j=0;
	vec.clear();
	while(i<win.size() && j<lose.size()){
		if(win[i]<lose[j]) vec.push_back(win[i++]);
		else vec.push_back(lose[j++]);
	}
	while(i<win.size()) vec.push_back(win[i++]);
	while(j<lose.size()) vec.push_back(lose[j++]);
}

int main(){
	cin>>N>>R>>Q;
	for(int i=1; i<=2*N; ++i){
		cin>>s;
		Player p; p.no=i; p.s=s;
		vec.push_back(p);
	}
	for(int i=0; i<2*N; ++i){
		cin>>w;
		vec[i].w=w;
	}
	
	sort(vec.begin(), vec.end());
	vector<Player> win, lose;
	for(int i=0; i<R; ++i){
		for(int j=0; j<2*N; j+=2){
			if(vec[j].w>vec[j+1].w){
				vec[j].s++;
				win.push_back(vec[j]);
				lose.push_back(vec[j+1]);
			}
			else{
				vec[j+1].s++;
				win.push_back(vec[j+1]);
				lose.push_back(vec[j]);
			}
		}
		merge(win, lose);
		win.clear(); lose.clear();
	}
	cout<<vec[Q-1].no<<endl;
	return 0;
}
