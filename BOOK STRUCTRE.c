// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
struct book{
    char title[30];
    char author[30];
    char ISBN[13];
    int publication_year;
    float price;
}book1,book2;
int main(){
strcpy(book1.title,"Things fall apart");
strcpy(book1.author,"Richard Mathenge");
strcpy(book1.ISBN,"HERO");
book1.publication_year=2005;
book1.price=870.23;

printf("The title is %s\n",book1.title);

printf("The aouther is%s\n",book1.author);
printf("The ISBN is %s\n",book1.ISBN);
printf("The year is %d\n",book1.publication_year);
printf("The price is %d\n",book1.price);

    return 0;
}