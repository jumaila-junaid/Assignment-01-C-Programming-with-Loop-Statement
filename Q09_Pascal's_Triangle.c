#include <stdio.h>

int main() {
    int i, j, rows, number;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; ++i) {

        // Spaces
        for (j = i; j < rows; ++j) {
            printf(" ");
        }

        number = 1;

        // Numbers
        for (j = 0; j <= i; ++j) {
            printf("%d ", number);

            number = number * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
