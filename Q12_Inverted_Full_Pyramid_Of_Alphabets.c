#include <stdio.h>

int main()
{
    int i, j, rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = rows; i >= 1; --i) {

        // Print spaces
        for (j = rows; j > i; --j) {
            printf(" ");
        }

        // Print alphabets
        for (j = 1; j <= i; ++j) {
            printf("%c", 'A' + j - 1);
        }

        for (j = i - 1; j >= 1; --j) {
            printf("%c", 'A' + j - 1);
        }

        printf("\n");
    }

    return 0;
}
