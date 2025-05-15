#include <stdio.h>  // 1. Include standard input/output library

int main() {  // 2. Start of main function
    int number, i = 1;
    unsigned long long factorial = 1;  // Use unsigned long long to handle large factorials

    // 3. Prompt user to enter a non-negative integer
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    // 4. Check for invalid input
    if (number < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        // 5. Calculate factorial using while loop
        while (i <= number) {
            factorial *= i;  // Multiply factorial by current i
            i++;            // Increment i
        }

        // 6. Print the result
        printf("Factorial of %d = %llu\n", number, factorial);
    }

    return 0;  // 7. End program
}

/*
🧠 Explanation
The program reads an integer from the user.

If the number is negative, it prints an error because factorial is undefined for negatives.

Otherwise, it uses a while loop starting from i = 1 to number, multiplying factorial by i each time.

Prints the factorial at the end.
*/
