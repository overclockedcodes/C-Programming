#include <stdio.h>  // 1. Include standard I/O library

int main() {  // 2. Entry point of the program
    int a = 10, b = 5, c = 2, result;  // 3. Declare and initialize variables

    // 4. Evaluate a complex expression
    result = a + b * c - (a / b) + c;

    // 5. Display the result
    printf("Result of expression 'a + b * c - (a / b) + c' = %d\n", result);

    return 0;  // 6. End the program
}

/*
🧠 Step-by-Step Evaluation
Given:

a = 10, b = 5, c = 2

Expression:
a + b * c - (a / b) + c

Multiplication has higher precedence:

b * c = 5 * 2 = 10

Division is next:

a / b = 10 / 5 = 2

Now plug in values:

10 + 10 - 2 + 2

Evaluate from left to right:

20 - 2 = 18

18 + 2 = 20

So the final result = 20

🧪 Output

Result of expression 'a + b * c - (a / b) + c' = 20

📘 Operator Precedence Used Here

Operator	Description	              Precedence Level
*, /	    Multiplication, Division	High
+, -	    Addition, Subtraction	    Medium
()	      Parentheses	              Highest
*/
