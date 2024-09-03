#include <stdio.h>  
 
void main() 
{ 
         int a = 0xFFFF; 
         char b = 0xAA; 
         unsigned char c = 0xAA; 
         int d; 
  
         printf("~b = 0x%Xn", ~b ); 
  
         printf("\na & b = 0x%Xn", a & b ); 
         printf("\na & c = 0x%Xn", a & c ); 
  
         a = 0xA0; 
         b = 0x83; 
         printf("\na | b = 0x%Xn", a | b ); 
  
         a = 0xFFFF; 
         d = 0x18CF; 
         printf("\na ^ d = 0x%Xn", a ^ d ); 
  
         a = 20; 
         printf("\nd << %d = 0x%Xn", a, d << a ); 
  
         d = 0x800018CF; 
         a = 5; 
         printf("\nd >> %d = 0x%Xn", a, d >> a );  
} 
