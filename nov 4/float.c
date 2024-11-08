#include <stdio.h>
#include <stdlib.h>
int main()
{
    float floatNumber;
    int intNumber;
    printf("Enter a floating-point number: ");
    scanf("%f", &floatNumber);
    intNumber = (int)floatNumber;
    printf("The floating-point number: %f\n", floatNumber);
    printf("The converted integer: %d\n", intNumber);

    return 0;
}