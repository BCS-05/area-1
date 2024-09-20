// Online C compiler to run C program online
#include <stdio.h>

int main() {
    //Program to find simpleintrest
    int principal;
    int rate;
    int time;
    int simple_intrest;
    
    printf("enter principal:");
    scanf("%d",&principal);
    
    printf("enter rate:");
    scanf("%d",&rate);
    
    printf("enter time:");
    scanf("%d",&time);
    
    simple_intrest=principal*rate*time;
    printf("The simple_intrest is %d",simple_intrest);
    
    return 0;
}