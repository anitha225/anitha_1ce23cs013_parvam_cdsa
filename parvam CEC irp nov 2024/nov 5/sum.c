#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n,sum=0;
    printf("enter the positive integer:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum += i;
    }
    printf("sum=%d",sum);
  return 0;
}