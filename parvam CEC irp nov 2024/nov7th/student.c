#include <stdio.h>
struct studentdata
{
 int sub1,sub2,sub3,total;
char name,usn,branch;
float avg,percentage;  
};

int main() {
    struct studentdata studentvar ;
    int n;
printf("enter the number of students:");
scanf("%d",&n);
printf("\n*******enter the details of the student ***\n");
printf("enter the name of the student:");
scanf("%s",&studentvar.name);
printf("enter the usn of the student:");
scanf("%s",&studentvar.usn);
printf("enter the branch of the student:");
scanf("%s",&studentvar.branch);
printf(" enter the marks of sub 1:");
scanf("%d",&studentvar.sub1);
printf("enetr the marks of sub 2:");
scanf("%d",&studentvar.sub2);
printf("enter the marks of sub 3:");
scanf("%d",&studentvar.sub3);
studentvar.total=studentvar.sub1+studentvar.sub2+studentvar.sub3;
studentvar.percentage=(studentvar.total/300.0)*100.0;
studentvar.avg=studentvar.total/3.0;
printf("\n avg:%f",studentvar.avg);
printf("\n total:%d",studentvar.total);
printf("\n percentage:%f",studentvar.percentage);
return 0;
}
