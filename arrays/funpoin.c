# include <stdio.h>
 void display ( int *j, int n ) ;
 int main( )
 {
    int num[ ] = { 24, 34, 12, 44, 56, 17 } ;
    display ( &num[ 0 ], 6 ) ;
    return 0 ;
 }
 
 void display ( int *j, int n )
 {
 int i ;
 for ( i = 0 ; i <= n - 1 ; i++ )
 {
    printf ( "element = %d\t", *j ) ;
    printf("Address : %d\n",j);
    j++ ; /* increment pointer to point to next element */
 }
 }