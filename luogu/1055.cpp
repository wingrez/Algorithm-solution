#include<cstdio>

int arr[9];
char ch;

int main(){
	scanf("%1d-%1d%1d%1d-%1d%1d%1d%1d%1d-%c", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6], &arr[7], &arr[8], &ch);
	int sum=0;
	for(int i=0; i<9; ++i){
		sum+=(i+1)*arr[i];
	}
	int last;
	if(ch=='X') last=10;
	else last=ch-'0';
	if(sum%11==last) printf("Right\n");
	else printf("%d-%d%d%d-%d%d%d%d%d-%c", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8], sum%11==10?'X':sum%11+'0');
	return 0;
}
