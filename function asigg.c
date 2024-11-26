#include <stdio.h>

void checkEvenOrOdd(int number) {
    if (number % 2 == 0) {
        printf("The number is even\n");
    } else {
        printf("The number is odd\n");
    }
}

int main() {
    int num;


    printf("Enter a number: ");
    scanf("%d", &num);

    checkEvenOrOdd(num);

    return 0;
}
