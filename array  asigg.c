#include <stdio.h>

int main() {
    // Declare and initialize the 2D array
    int scores[2][2] = {
        {65, 92},
        {72, 59}
    };

    // Print the elements of the array using a nested for loop
    printf("Elements of the 2D array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}
