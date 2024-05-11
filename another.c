#include<stdio.h>
int main()
{
int que1,que2,que3,que4,que5,que6,que7,que8,que9,que10;
que1=1;
que2=2;
que3=3;
que4=4;
que5=5;
que6=1;
que7=2;
que8=3;
que9=4;
que10=5;
int a,b,c,d,e,f,g,h,i,j;
printf("dear student please enter your answers:\n");
scanf("%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
int k,l,m,n,o,p,q,r,s,t;
k=que1==a;
l=que2==b;
m=que3==c;
n=que4==d;
o=que5==e;
p=que6==f;
q=que7==g;
r=que8==h;
s=que9==i;
t=que10==j;
printf("your percentage:%d",(k+l+m+n+o+p+q+r+s+t)*10);
return 0;




}