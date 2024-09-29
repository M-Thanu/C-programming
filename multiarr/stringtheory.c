# include <stdio.h>
#include <string.h>
 int main( )
 {
 char s1[]="Jerry" ;
 char s2[]="Ferry" ;
 int i, j, k;
 i = strcmp(s1,"Jerry");
 j = strcmp(s1,s2);
 k = strcmp(s1, "Toy");
 printf("%d %d %d\n",i,j,k);
 return 0 ;
 }