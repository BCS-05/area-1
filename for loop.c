#include<stdio.h>
int main(){
	int i,sum=0;
	for(i=20;i>0;i--){
		printf("%d\n",i);
		sum=sum+i;
	}
	printf("The sum is:%d",sum);
	
	return 0;
}
