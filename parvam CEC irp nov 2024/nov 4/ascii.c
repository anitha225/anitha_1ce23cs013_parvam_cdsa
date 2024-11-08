#include<stdio.h>
int main()
{
    printf("character \t ascii value:\n");
    for(int i=32;i<=126;i++)
    {
        printf("%c\t\t%d\n",i,i);
    }
    return 0;
}