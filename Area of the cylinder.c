//A programm to find the area of a cylinder
#include <stdio.h>
int main(){
	//A=2pier(r+h)
	
	int area;
	float pie;
	int r;
	int h;
     printf("Enter pie:"); 
	 scanf("%f",&pie);
	 
     printf("Enter radius:"); 
	 scanf("%d",&r);
	 
     printf("Enter height:"); 
	 scanf("%d",&h);
	 
	 area=2*pie*r*(r+h);
	 printf("The area of a cylinder is:%d",area);
}