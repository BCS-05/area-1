#include <stdio.h>
int main()
{
	int math;
	int kisw;
	int eng;
	int total;
	int average;

	printf("Enter maths:");
	scanf("%d",&math);
	
	printf("Enter eng:");
	scanf("%d",&eng);
	
	printf("Enter kisw:");
	scanf("%d",&kisw);
	
		total=math+eng+kisw;
	
	printf("The total is:%d\n",total);
	
	average=total/3;
	
		printf("The average is:%d\n",average);
		
    if(average>=70 && average<=100){
		printf("Grade A");
	}
    else if(average>=60 && average<=69){
		printf("Grade B");
	}
   else if(average>=50 && average<=59){
		printf("Grade C");
	}
    else if(average>=40 && average<=49){
		printf("Grade D");
	}
	else{
		printf("grade E(fail)");
		
	}
	
	
	
	
	return 0;
}