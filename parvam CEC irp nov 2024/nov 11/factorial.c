#include<stdio.h>
int main()
{
    int n,i;
    int fact=1;
    printf("enter the number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    
       fact=fact*i;
       printf("the factors are:%d",fact);
      return 0;
}