#include <stdio.h>

int main() {
    int i, j, rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; ++i) {

        // 1. Print left side spaces
        for (j = i; j < rows; ++j) {
            printf(" ");
        }

        // 2. Print increasing numbers
        for (j = 1; j <= i; ++j) {
            printf("%d", (i + j - 2) % 9 + 1);
        }

        // 3. Print decreasing numbers
        for (j = i - 1; j >= 1; --j) {
            printf("%d", (i + j - 2) % 9 + 1);
        }

        // 4. Print right side spaces
        for (j = i; j < rows; ++j) {
            printf(" ");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
