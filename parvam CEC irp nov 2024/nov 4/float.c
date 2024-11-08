#include <stdio.h>

int main() {
    float num;
    int int_num;

    // Ask the user to input a float value
    printf("Enter a float value: ");
    scanf("%f", &num);

    // Convert float to int by type casting
    int_num = (int)num;

    // Display the original float and the converted integer value
    printf("Original float value: %.2f\n", num);
    printf("Converted integer value: %d\n", int_num);

    return 0;
}