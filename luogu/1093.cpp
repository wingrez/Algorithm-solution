#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Stu{
	int no;
	int chinese;
	int math;
	int english;
	Stu(int _no, int _chinese, int _math, int _english){
		no=_no; chinese=_chinese; math=_math; english=_english;
	}
	int total() const{
		return chinese+math+english;
	}
	bool operator < (const Stu &rhs) const{
		if(total()==rhs.total()){
			if(chinese==rhs.chinese) return no<rhs.no;
			return chinese>rhs.chinese;
		}
		return total()>rhs.total();
	}
};

int n;
vector<Stu> vec;

int main(){
	cin>>n;
	for(int i=1; i<=n; ++i){
		int chinese, math, english;
		cin>>chinese>>math>>english;
		vec.push_back(Stu(i, chinese, math, english));
	}
	sort(vec.begin(), vec.end());
	for(int i=0; i<5; i++){
		cout<<vec[i].no<<" "<<vec[i].total()<<endl;
	}
	return 0;
}
