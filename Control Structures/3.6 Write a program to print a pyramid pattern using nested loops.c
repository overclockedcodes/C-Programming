#include <stdio.h>

int main() {
    int rows, i, j, space;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Outer loop for each row
    for(i = 1; i <= rows; i++) {
        // Print spaces before stars
        for(space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Print stars for current row
        for(j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        // Move to next line after each row
        printf("\n");
    }

    return 0;
}

/*
🧠 How it works
User inputs the number of rows.

For each row i:

Print (rows - i) spaces to center the pyramid.

Print (2 * i - 1) stars (*) to form the pyramid shape.

The nested loops handle spaces and stars respectively.
*/
