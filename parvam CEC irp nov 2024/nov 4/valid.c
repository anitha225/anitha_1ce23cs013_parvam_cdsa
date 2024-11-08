#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number >= 10 && number <= 20 ) {
        printf("valid\n");
    } else {
        printf("invalid\n");
    }

    return 0;
}