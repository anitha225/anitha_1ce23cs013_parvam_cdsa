#include <stdio.h>

int main() {
     int x,y,*pointer;
     x=22;
      pointer=&x;
       printf("enter the pointer:%d",x);
     y=*pointer;
      printf("enter the y:%d",*pointer);
       return 0;
}