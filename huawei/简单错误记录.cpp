#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct Err{
	string name;
	int line;
	int num;
	Err(){ name=""; line=0; num=0; }
	Err(string _name, int _line, int _num){
		name=_name; line=_line; num=_num;
	}
	bool operator == (const Err& rhs) const{
		return name==rhs.name && line==rhs.line;
	}
};

vector<Err> errs;

string getName(string path){
	int p=path.find_last_of('\\')+1;
	return path.substr(p);
}

string outName(string name){
	if(name.size()<=16) return name;
	return name.substr(name.size()-16);
}

int main(){
	string path, name;
	int line;
	while(cin>>path>>line){
		name=getName(path);
		int i;
		for(i=0; i<errs.size(); ++i){
			if(errs[i]==Err(name, line, 0)){
				errs[i].num++; break;
			}
		}
		if(i==errs.size()){
			errs.push_back(Err(name,line,1));
		}
	}
	int i= (int)errs.size()-8>0? (int)errs.size()-8: 0;
	for(; i<errs.size(); ++i){
		cout<<outName(errs[i].name)<<" "<<errs[i].line<<" "<<errs[i].num<<endl;
	}
	return 0;
}
