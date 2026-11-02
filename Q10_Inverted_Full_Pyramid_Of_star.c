#include <stdio.h>

int main() {
    int i, j, rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = rows; i >= 1; --i) {

        // Print spaces
        for (j = i; j < rows; ++j) {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= 2 * i - 1; ++j) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
