#include <stdio.h>
#include <stdlib.h>

int main() {
  int num,i;
  printf("enter the positive number:");
  scanf("%d",&num);
  printf("factors of %d is",num);
  for(i=1;i<=num;++i)
  {
      if(num % i==0)
      {
          printf("%d",i);
      }
  }
  

    return 0;
}