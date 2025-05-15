#include <stdio.h>  // 1. Include standard input/output library

int main() {  // 2. Start of the main function
    unsigned int a = 12;   // 3. Declare and initialize integer a (Binary: 00001100)
    unsigned int b = 5;    // 4. Declare and initialize integer b (Binary: 00000101)

    // 5. Perform bitwise operations and print results
    printf("a = %u, b = %u\n", a, b);

    // Bitwise AND
    printf("a & b = %u\n", a & b);  // 00001100 & 00000101 = 00000100 (4)

    // Bitwise OR
    printf("a | b = %u\n", a | b);  // 00001100 | 00000101 = 00001101 (13)

    // Bitwise XOR
    printf("a ^ b = %u\n", a ^ b);  // 00001100 ^ 00000101 = 00001001 (9)

    // Bitwise NOT
    printf("~a = %u\n", ~a);        // ~00001100 = 11110011 (in 2's complement, interpreted as large unsigned value)
    printf("~b = %u\n", ~b);        // ~00000101 = 11111010

    return 0;  // 6. End the program
}

/*
🧠 Explanation of Each Bitwise Operator
& (AND): Each bit is 1 only if both bits are 1.

| (OR): Each bit is 1 if at least one bit is 1.

^ (XOR): Each bit is 1 if the bits are different.

~ (NOT): Inverts all the bits (1 becomes 0, and 0 becomes 1). On unsigned ints, this results in a large number because of how C handles binary in memory.

🔍 Example
If:

a = 12 → Binary: 00001100

b = 5 → Binary: 00000101

Then:

a & b → 00000100 = 4

a | b → 00001101 = 13

a ^ b → 00001001 = 9

~a (for 8-bit) → 11110011 = (in unsigned 32-bit, becomes 4294967283)
*/
