#include <stdio.h>

int main() {
    int i, j, rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; ++i) {

        // Spaces
        for (j = i; j < rows; ++j) {
            printf(" ");
        }

        // Increasing numbers
        for (j = 1; j <= i; ++j) {
            printf("%d", i + j - 1);
        }

        // Decreasing numbers
        for (j = i - 1; j >= 1; --j) {
            printf("%d", i + j - 1);
        }

        printf("\n");
    }

    return 0;
}
