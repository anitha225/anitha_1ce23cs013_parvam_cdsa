#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,sum=0;
    printf("enter the number of terms:");
    scanf("%d",&n);
    printf("\n the square of natural numbers upto %d terms are:",n);
    for(i=0;i<=n;i++)
    {
        printf("%d",i+1);
        sum += i*1;
    }
    printf("\n the sum of square natural numbers upto %d terms=%d \n",n,sum);
  return 0;
}