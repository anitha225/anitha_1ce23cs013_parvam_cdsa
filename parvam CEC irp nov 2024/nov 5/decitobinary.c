#include<stdio.h>
#include<stdlib.h>
void decimaltobinary(int decimal)
{
    int binary[32];
    int i=0;
    while(decimal != 0)
    {
        binary[i++]=decimal%2;
        decimal/=2;
    }
    printf("binary  equivalent:");
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",binary[j]);
    }
    
    }
    int main()
    {
        int decimal;
        printf("enter the decimal number:");
        scanf("%d",&decimal);
        decimaltobinary(decimal);
    }
