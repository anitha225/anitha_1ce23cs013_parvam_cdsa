
#include <stdio.h>


void concatenate(int *arr1, int *arr2)
{
    
    while (arr1) {
        ++arr1;
    }

    
    
    while (arr2) {
        arr1 = arr2++;
    }

    
    arr1 = '\0';
}

int main()
{
    int arr1[5] = {5,6,7,8,9};
    int arr2[3] = {9,2,1};
    concatenate( arr1, arr2);

    printf("Concatenated array: %d\n", arr1,arr2);

    return 0;
}
