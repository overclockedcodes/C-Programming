#include <stdio.h>  // 1. Include standard I/O library

int main() {
    char operator;  // 2. To store the operator (+, -, *, /)
    double num1, num2, result;  // 3. To store two numbers and the result

    // 4. Get user input
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Note the space before %c to consume any leftover whitespace

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // 5. Perform the operation based on the operator
    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is undefined.\n");
            }
            break;

        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;  // 6. End program
}

/*
🧠 Explanation
Reads the operator as a character.

Reads two numbers (double to allow decimals).

switch executes the matching case block based on the operator:

+, -, *, /

Checks for division by zero before dividing.

Prints the result formatted to 2 decimal places.

The default case handles invalid operators.
*/
