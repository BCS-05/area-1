//c arrays
#include<stdio.h>
int main(){
	int i;
	int j;
	int marks[2][3]={
	{12,25,18},
	{20,32,40}};
	for(i=0;i<2;i++){
		for(j=0;i<3;i++){
	printf("marks[%d][%d]=%d\n",i,j,marks[i][j]);	
	}
	
	}

return 0;
	}