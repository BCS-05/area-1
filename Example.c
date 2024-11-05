#include<stdio.h> 
int main()
{
char a;
char nume[]={};
int age;
float area;
double salary;

printf("Enter character: " );
scanf("%c",&a);
printf("The character is %c\n",a);

printf("Enter name:" );
scanf("%s",&nume);
printf("The name is %s\n",nume);

printf("Enter age: " );
scanf("%d",&age);
printf("The age is %d\n",age);

printf("Enter area: " );
scanf("%f",&area);
printf("The area is %.2f\n",area);

printf("Enter salary : " );
scanf("%lf",&salary);
printf("The salary is %lf\n",salary);
	
	
	
	
    
	return 0;
}