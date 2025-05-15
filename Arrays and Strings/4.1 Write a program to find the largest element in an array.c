#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];  // Declare array of size n

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];  // Assume first element is largest initially

    // Loop through array to find the largest element
    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];  // Update largest if current element is greater
        }
    }

    printf("The largest element is: %d\n", largest);

    return 0;
}

/*
🧠 Explanation
Reads n, the size of the array.

Reads n elements into the array.

Initializes largest with the first element.

Loops through the array and updates largest if a bigger element is found.

Prints the largest element.
*/
