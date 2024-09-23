//A programm to find the volume of a cylinder
#include <stdio.h>
int main(){
	//volume=pie*r*r*h
	
	double volume;
	float pie;
	int r;
	int h;
     printf("Enter pie:"); 
	 scanf("%f",&pie);
	 
     printf("Enter radius:"); 
	 scanf("%d",&r);
	 
     printf("Enter height:"); 
	 scanf("%d",&h);
	 volume=pie*r*r*h;
	 
	 ;
	 printf("The volume of a cylinder is:%.3lf",volume);
}