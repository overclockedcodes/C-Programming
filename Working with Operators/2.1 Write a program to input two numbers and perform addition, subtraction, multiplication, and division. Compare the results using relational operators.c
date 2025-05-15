#include <stdio.h>  // 1. Include standard I/O functions

int main() {  // 2. Entry point of the program
    float num1, num2;  // 3. Declare two float variables to store user input

    // 4. Prompt and read user input
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // 5. Perform arithmetic operations
    float sum = num1 + num2;
    float difference = num1 - num2;
    float product = num1 * num2;
    float quotient = num2 != 0 ? num1 / num2 : 0;  // Avoid divide-by-zero

    // 6. Display results
    printf("\nResults:\n");
    printf("Addition: %.2f\n", sum);
    printf("Subtraction: %.2f\n", difference);
    printf("Multiplication: %.2f\n", product);

    if (num2 != 0)
        printf("Division: %.2f\n", quotient);
    else
        printf("Division: Cannot divide by zero\n");

    // 7. Compare the results using relational operators
    printf("\nComparisons:\n");

    if (sum > product)
        printf("Sum is greater than product\n");
    else if (sum < product)
        printf("Product is greater than sum\n");
    else
        printf("Sum and product are equal\n");

    if (difference == 0)
        printf("Difference is zero\n");
    else
        printf("Difference is not zero\n");

    return 0;  // 8. End the program
}

/*
🧠 Explanation of Key Parts
float is used to allow decimal numbers.

scanf("%f", &num1); reads floating-point numbers.

quotient = num2 != 0 ? num1 / num2 : 0; safely handles division (avoids divide-by-zero).

Relational operators used:

>, <, ==, !=
*/
