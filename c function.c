//c functions
#include <stdio.h>
#include<math.h> //built in functions sin(). cos(), tan(), sqrt()
int sum(int x, int y); //function prototype
float divide(float a, float b);//function prototype
int main() {
int x,a,b,z;
float y;
printf("Enter two values: ");
scanf("%d%d", &a,&b);
x= sum(a, b); //funtion calling
z= sum(45, 780); //funtion calling 30
y= divide(a, b); //funtion calling

printf("The sum is %d \n", x);
printf("The 2nd sum is %d \n", z);
printf("The division is %.2f \n",y);
return 0;
}
//function definition
int sum(int x, int y){
int z;
z= x+y;
return z;
}
//function definition
float divide(float a, float b){
float c;
c = a/b;
return c;
}