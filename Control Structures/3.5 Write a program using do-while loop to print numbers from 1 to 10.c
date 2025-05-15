#include <stdio.h>  // 1. Include standard input/output library

int main() {  // 2. Start of main function
    int i = 1;  // 3. Initialize counter to 1

    // 4. do-while loop to print numbers from 1 to 10
    do {
        printf("%d\n", i);
        i++;  // Increment counter
    } while (i <= 10);

    return 0;  // 5. End program
}

/*
🧠 Explanation
int i = 1; initializes the counter.

The do block executes at least once before checking the condition.

After printing i, it increments i.

The loop continues while i is less than or equal to 10.
*/
