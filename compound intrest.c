//program to find compound intrest
#include<stdio.h>
int main(){
	//c=p(1+r/n)^nt
	int c;
	int p;
	int r;
	int n;
	int t;
	
	  
	printf("Enter the principle:");
	scanf("%d",&p);
	
    printf("Enter the rate:");
	scanf("%d",&r);
	
    printf("Enter the number:");
	scanf("%d",&n);
	
    printf("Enter the time:");
	scanf("%d",&t);
	
	  c=p*(1+r/n)^n*t; 
	  
    printf("The simple_intrest:%d",c);
    
    return 0;
	
}