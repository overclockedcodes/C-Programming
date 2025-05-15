#include <stdio.h>  // 1. Include standard I/O library

int main() {  // 2. Start of the main function
    int a, b, c;  // 3. Declare three integer variables

    // 4. Prompt the user for input
    printf("Enter three numbers:\n");

    printf("First number: ");
    scanf("%d", &a);

    printf("Second number: ");
    scanf("%d", &b);

    printf("Third number: ");
    scanf("%d", &c);

    // 5. Check if the numbers are in ascending order
    if (a < b && b < c) {  // Using logical AND operator &&
        printf("The numbers are in ascending order.\n");
    } else {
        printf("The numbers are NOT in ascending order.\n");
    }

    return 0;  // 6. Indicate successful completion
}

/*
🧠 Line-by-Line Explanation
#include <stdio.h>

Includes the Standard Input/Output library for using printf and scanf.

int main()

The main function where execution begins.

int a, b, c;

Declares three integer variables to hold the numbers entered by the user.

printf(...) and scanf(...)

Prompt the user and read three numbers into a, b, and c.

if (a < b && b < c)

Checks if a is less than b AND b is less than c.

The && operator is the logical AND, which returns true only if both conditions are true.

printf(...) inside if and else

Prints whether the numbers are in ascending order or not.

return 0;

Ends the program and returns success.
*/
