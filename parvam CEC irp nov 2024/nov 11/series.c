
#include<stdio.h>
int main()
{
    int num,i,k,j,temp;
    printf("enter the  number:");
    scanf("%d",&num);
    for(i=1;1<=num;++i){
        for(temp=1;temp<=(num-i)*2;++temp)
        printf(" ");
        
        for(j=1;j<=i;++j)
        
            if(i!=j)
            printf("%d",j);
            else
            printf("%d",j);
            for(k=i-1;k>=1;k--)
            printf(" %d", k);
            printf("/n");
        }
        return 0;
    }