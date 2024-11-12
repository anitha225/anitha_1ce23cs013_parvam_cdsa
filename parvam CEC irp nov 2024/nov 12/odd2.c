#include<stdio.h>
int main()
{
    int i, n1,n2;
    printf("enter the n1 and n2:");
    scanf("%d%d",&n1,&n2);
    if(n1<n2){
    for(i=n1;i<=n2;i++)
    {
        if(i%2!= 0 )
        printf("\t %d",i);
    }
    }
    else{
        printf("invalid");
    }
    return 0;

    }
