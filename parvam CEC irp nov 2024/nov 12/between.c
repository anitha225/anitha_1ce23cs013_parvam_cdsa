#include<stdio.h>
int main()
{
    int  n1,n2;
    printf("enter the n1 and n2:");
    scanf("%d%d",&n1,&n2);
    if(n1<n2){
    for(;++n1 < n2;)
    
        printf("\t %d",n1);
    
    }
    else{
        printf("invalid");
    }
    return 0;

    }
