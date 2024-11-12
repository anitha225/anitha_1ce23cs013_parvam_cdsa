#include<stdio.h>
int main()
{
    char ch;
    printf("character  \n");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
    {
        printf("the given character is uppercase",ch);
    }
     else if(ch>=97 && ch<=122)
    {
        printf("the given character is lowercase",ch);
    }
    else{
        printf("the given character is special character",ch);
    }
    return 0;
}