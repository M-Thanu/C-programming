#include <stdio.h>

int main(){
   int s;
   printf("Input time in seconds: ");
   scanf("%d",&s);
   int h;
   h = s/3600;
   int m;
   m = (s%3600) / 60;
   int sec;
   sec = s - (h*3600) - (m*60);
   printf("%d hours %d minutes %d seconds",h,m,sec);
   
   return 0;
}