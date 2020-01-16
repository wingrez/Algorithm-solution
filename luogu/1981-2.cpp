#include<cstdio>

int main(){
	int is_end=0;
	int pre_num, num, ans=0;
	char pre_op=0, op;
	while(!is_end){
		scanf("%d", &num);
		is_end= scanf("%c",&op)==1? 0: 1;
		if(pre_op==0) pre_num=num;
		else if(pre_op=='+') {
			ans=(ans+pre_num)%10000;
			pre_num=num;
		}
		else if(pre_op=='*') pre_num=(pre_num*num)%10000;
		if(is_end) ans=(ans+pre_num)%10000;
		pre_op=op;
	}
	printf("%d\n", ans);
	return 0;
}
