// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
struct student{
    char name[20];
    char reg_no[14];
    char email[30];
    int ID;
    int phone;
    float marks;
}student1,student2;
int main(){
strcpy(student1.name,"clinto");
strcpy(student1.reg_no,"BCS-05");
strcpy(student1.email,"mjanjezclinto@gmail.com");
student1.ID=42899860;
student1.phone=796939191;
student1.marks=87.23;

printf("%s\n",student1.name);
printf("%s\n",student1.reg_no);
printf("%s\n",student1.email);
printf("%d\n",student1.ID);
printf("%d\n",student1.phone);
printf("%d\n",student1.marks);

    return 0;
}