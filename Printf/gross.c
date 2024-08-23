#include<stdio.h>
int main()
{
    int l,rl;
    float bs,gs,ts;
    int menu=2;
    printf("enter basic salary:");
    scanf("%d",&bs);
    printf("Enter the leave:");
    scanf("%d",&l);
    printf("enter menu:");
    scanf("%d",&menu);

    switch(menu){
        case 1:
           rl=14-l;
           printf("remaining leave:%d\n",rl);
           break;

        case 2:
          
            if(bs>=50000)
            {
               ts=bs*0.15;
               printf("%d",ts);
            
            }
            else
            {
               ts=bs*0.05;
               printf("%d",ts);

            }

             
           break;

        case 3:
           gs=bs*0.85+(bs-ts);
           printf("gross salary:%2.f",gs);
           break;
    }
    return 0;

}