#include <stdio.h>  // 1. Include standard input/output library

int main() {  // 2. Start of main function
    int number;  // 3. Declare a variable to store the user's input

    // 4. Prompt the user for a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // 5. Use if-else to determine the nature of the number
    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;  // 6. End of program
}

/*
🧠 Explanation of Each Line
#include <stdio.h> – Includes the library to use printf and scanf.

int main() – The program starts here.

int number; – Declares an integer variable.

scanf("%d", &number); – Reads an integer from the user.

if (number > 0) – Checks if the number is greater than zero.

else if (number < 0) – If not positive, checks if it's negative.

else – If it's neither, it must be zero.

return 0; – Ends the program.
*/
