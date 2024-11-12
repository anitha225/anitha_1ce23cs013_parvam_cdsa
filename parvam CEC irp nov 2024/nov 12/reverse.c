#include <stdio.h>

int main() {
    int i,rev[5];
    int arr[5]={7 ,8 ,6 ,5 ,3};
    for (i = 0; i < 5; i++){
        rev[i] = arr[5 - i - 1];
    }
    printf("Reversed array:\n");
    for(i=0;i<5;i++){
        printf(" %d",rev[i]);
    }
    return 0;
}
