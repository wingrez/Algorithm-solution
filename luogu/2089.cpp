#include<cstdio>
#include<vector>
using namespace std;

struct Info{
	int a[10];
};

int n;
vector<Info> myvec;

int main(){
	int cnt=0;
	scanf("%d", &n);
	if(n<=30)
	for(int n1=1; n1<=3; ++n1)
	for(int n2=1; n2<=3; ++n2)
	for(int n3=1; n3<=3; ++n3)
	for(int n4=1; n4<=3; ++n4)
	for(int n5=1; n5<=3; ++n5)
	for(int n6=1; n6<=3; ++n6)
	for(int n7=1; n7<=3; ++n7)
	for(int n8=1; n8<=3; ++n8)
	for(int n9=1; n9<=3; ++n9)
	for(int n10=1; n10<=3; ++n10){
		if(n1+n2+n3+n4+n5+n6+n7+n8+n9+n10==n){
			Info info={n1,n2,n3,n4,n5,n6,n7,n8,n9,n10};
			myvec.push_back(info);
			++cnt;
		}
	}
	printf("%d\n", cnt);
	for(int i=0; i<myvec.size(); ++i){
		printf("%d %d %d %d %d %d %d %d %d %d\n", myvec[i].a[0], myvec[i].a[1], myvec[i].a[2], myvec[i].a[3], myvec[i].a[4], myvec[i].a[5], myvec[i].a[6], myvec[i].a[7], myvec[i].a[8], myvec[i].a[9], myvec[i].a[10]);
	}
	return 0;
}
