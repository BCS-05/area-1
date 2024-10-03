#include<stdio.h>
int main(){
	int i=50,sum;
	do{
		printf("%d\n",i);
		sum=sum+i;
	
		i--;
		
	}while(i>0);
	printf("the sum is:%d",sum);
}