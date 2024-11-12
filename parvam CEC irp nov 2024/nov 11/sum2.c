#include<stdio.h>
int main()
{
int n,m,sum=0;
printf("enter the digits:");
scanf("%d",&n);
while(n>0){
m=n%10;
sum=sum+m;
n=n/10;
printf("\n n=%d,m=%d,sum=%d\n",n,m,sum);
}
printf("sum:%d",sum);
return 0;
}

