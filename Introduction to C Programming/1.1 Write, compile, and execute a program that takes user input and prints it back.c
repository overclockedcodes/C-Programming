#include <stdio.h>  // 1. Include standard input/output library

int main() {  // 2. Start of main function
    int number;  // 3. Declare an integer variable to store the user's input

    printf("Enter a your registration number: ");  // 4. Ask the user to enter a number

    scanf("%d", &number);  // 5. Read an integer from user input and store it in 'number'

    printf("You registration number is: %d\n", number);  // 6. Print the entered number back to the user

    return 0;  // 7. Indicate successful program completion
}

/*
🧠 Explanation of Each Line
#include <stdio.h>

Includes the Standard Input/Output header to use printf and scanf.

int main()

The entry point of the C program.

int number;

Declares an integer variable named number to store the user's input.

printf("Enter a your registration number: ");

Prints a prompt asking the user for a number.

scanf("%d", &number);

Reads an integer input from the user and stores it in the variable number.

%d is the format specifier for integers.

&number is the address of the variable, needed by scanf to store the input.

printf("You your registration number is: %d\n", number);

Displays the entered number using %d.

return 0;

Ends the main() function and returns 0, meaning the program ran successfully.

*/
