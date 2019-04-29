#include<cstdio>
#include<cstring>
#define MAXN 50
int main() {
	int n;
	scanf("%d",&n);
	while(n--) {
		char A[4]= {'C','H','O','N'};
		double M[4]= {12.01,1.008,16.00,14.01};
		char str[MAXN];
		double sum=0;
		scanf("%s",str);
		for(int i=0; i<strlen(str);) {
			int j;
			for(j=0; j<4; j++) { //判断元素 
				if(str[i]==A[j])
					break;
			}
			i++;

			int judge=0;
			int num=0;
			while(str[i]>='0' && str[i]<='9') { //获取个数 
				judge=1;
				num=num*10+str[i]-'0';
				i++;
			}
			if(judge==0) num=1;

			sum+=M[j]*num;
		}
		printf("%.3f\n",sum);
	}
	return 0;
}
