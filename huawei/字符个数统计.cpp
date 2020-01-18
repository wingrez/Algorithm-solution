#include<cstdio>
#include<set>
using namespace std;

int main(){
	char ch;
	set<char> st;
	while((ch=getchar())!='\n'){
		st.insert(ch);
	}
	printf("%d\n", st.size());
	return 0;
}
