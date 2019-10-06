#include<cstdio>
#include<string>
using namespace std;

int main(){
	string sn="";
	char ch;
	int i=0;
	while((ch=getchar())!='\n' && ch!=EOF && i<11){
		sn+=ch;
		++i;
	}
	double v=stod(sn);
	printf("%.8f\n", (double)((int)(v/23.0*100000000.0+0.50000003)/100000000.0));
	return 0;
}
