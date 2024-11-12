#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int choice,n1,n2,total;
    printf("*****operations*****\n");
    printf("add \n");
    printf("sub \n");
    printf("division \n");
    printf("multiplication \n");
    printf("enter n1 and n2 values:");
    scanf("%d%d",&n1,&n2);
    printf("enter ur choice:");
    scanf("%d",&choice);
    switch (choice)

    {
    
    case 1:
    total=n1+n2;
    printf("total:%d+%d=%d",n1,n2,total);
    break;
    case 2:
    total=n1-n2;
    printf("total:%d-%d=%d",n1,n2,total);
    break;
    case 3:
    total=n1/n2;
    printf("total:%d/%d=%d",n1,n2,total);
    break;
    case 4:
    total=n1*n2;
    printf("total:%d*%d=%d",n1,n2,total);
    break;
    default: printf("invalid");
    }
    return 0;  
}