#include<stdio.h>
 int main()
 {
     int num,digit,sum=0;
     printf("enter the number to check for neon number:");
     scanf("%d",&num);
     int square=num*num;
     while(square != 0)
     {
         digit=square%10;
         sum += digit;
         square=square/10;
    }
    if(sum==num)
    {
        printf("the given number is neon number \n");
    }else
    {
        printf("not a neon number \n");
    }
    return 0;
    }