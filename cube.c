#include <stdio.h>

int main() {
    int terms, i, cube;
    printf("Input number of terms: ");
    scanf("%d", &terms);
    for (i = 1; i <= terms; i++) {
        cube = i * i * i; 
        printf("Number is: %d and cube of %d is : %d\n", i, i, cube);
    }

    return 0;
}
