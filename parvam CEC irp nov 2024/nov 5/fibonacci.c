#include <stdio.h>

int main() {
    int n, i;
    int first = 0, second = 1, next;

    // Ask the user to input the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Generate and print Fibonacci sequence
    for (i = 1; i <= n; i++) {
        if (i == 1)
            printf("%d ", first);  // Print first term
        else if (i == 2)
            printf("%d ", second); // Print second term
        else {
            next = first + second;  // Calculate next term
            printf("%d ", next);     // Print next term
            first = second;         // Update first
            second = next;          // Update second
        }
    }

    printf("\n");
    return 0;
}