#include <stdio.h>

int main() {
    unsigned int hexValue;
    printf("Enter a hexadecimal value (without 0x prefix): ");
    scanf("%x", &hexValue);
    printf("Decimal: %5u\n", hexValue);
    printf("Octal: %5o\n", hexValue);
    printf("Uppercase Hexadecimal: %5X\n", hexValue);

    return 0;
}