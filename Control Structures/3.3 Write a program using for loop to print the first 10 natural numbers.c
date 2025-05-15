#include <stdio.h>  // 1. Include standard input/output library

int main() {  // 2. Start of main function
    int i;

    // 3. Use for loop to print numbers from 1 to 10
    for(i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }

    return 0;  // 4. End program
}

/*
🧠 Explanation
for(i = 1; i <= 10; i++):

Starts i at 1.

Runs the loop while i is less than or equal to 10.

Increments i by 1 each iteration.

printf("%d\n", i); prints the current value of i followed by a new line.
*/
