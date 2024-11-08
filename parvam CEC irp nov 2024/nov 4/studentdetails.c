#include <stdio.h>

int main() {
int n,sub1,sub2,sub3,total;
char name,usn,branch;
float avg,percentage;
printf("enter the number of students:");
scanf("%d",&n);
printf("enter the details of the student");
printf("name:");
scanf("%s",&name);
printf("usn:");
scanf("%s",&usn);
printf("branch:");
scanf("%s",&branch);
printf("sub 1:");
scanf("%d",&sub1);
printf("sub 2:");
scanf("%d",&sub2);
printf("sub 3:");
scanf("%d",&sub3);
total=sub1+sub2+sub3;
percentage=(total/300.0)*100.0;
avg=total/3.0;
printf("avg:%f",avg);
printf("total:%d",total);
printf("percentage:%f",percentage);
return 0;
}