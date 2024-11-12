#include<stdio.h>
int main()
{
   int n,flag=0;
   printf("enter the number :");
   scanf("%d",&n);
    for(int i=2;i<=n/2;i++)
    {
      if(n%i==0)
      flag=1;
      
    }
   
   if (flag==0)
   {
    printf("the given number is prime number:");
   }
   else
   {
    printf("not a prime number");
   }
   return 0;
}