/*writing liblary management*/
#include <stdio.h>
int main(){
	int bookID;
	int dueDate;
	int returnDate;
	int overdue;
	
	printf("The bookID is:");
	scanf("%d",&bookID);
	
    printf("The dueDate is:");
	scanf("%d",&dueDate);
	
    printf("The returnDate is:");
	scanf("%d",&returnDate);
	
	overdue=returnDate-dueDate;
	printf("The overdue days are:%d\n",overdue);
	if(overdue>0&&overdue<=7){
		printf("fine is: %d ",overdue*20);
	}
		else if(overdue>=8&&overdue<=14){
		printf("fine is: %d ",overdue*50);
	}
		else if(overdue>=15){
		printf("fine is: %d ",overdue*100);
	}
		else{
		printf("NO FINE");
	}
	
	
	
	return 0;
	
	
	
	
	
	return 0;
}