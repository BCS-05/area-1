//c arrays
#include<stdio.h>
int main(){
	int i;
	int j;
	int k;
	int marks[2][2][3]={
	{12,25,18},
	{20,32,40},
	{12,25,18},
	{20,32,40}};
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				printf("marks[%d][%d][%d]=%d\n",i,j,k,marks[i][j][k]);
				
			}
		
	}
	
	}

return 0;
	}