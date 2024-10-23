#include <stdio.h>
int main(){
      int rt=0;
    int nin=0;
    int pay=0;
    int rsum=0;

    printf("\nRoom Type Details");
    printf("\n1. Double room - Half Board\n2. Double room - Full Board\n3. Triple Room- Half Board\n4. Triple room - Full Board");
    printf("\nRoom Type : ");
    scanf("%d",&rt);
    printf("Number of nights stayed in the hotel : ");
    scanf("%d",&nin);
    printf("Payment Methods : \n");
    printf("1. Cash \n2. ABS bank credit card\n3. Other credit card");
    printf("\nPayment method : ");
    scanf("%d",&pay);
    printf("\n-------------------------------");

    switch(rt){
        case 1:
            rsum +=40000*nin;
            break;
        case 2:
            rsum +=50000*nin;
            break;
        case 3:
            rsum +=45000*nin;
            break;
        case 4:
            rsum +=55000*nin;
            break;
    }

    float rr=0;
    rr = (float)rsum;
    if (rr<=50000.00){
        if (pay == 2){
            rr = 0.8 * rr;
        }else if(pay == 3){
            rr = 0.85 * rr;
        }
    }else{
       if (pay == 2){
            rr = 0.6 * rr;
        }else if(pay == 3){
            rr = 0.65 * rr;
        } 
    }

    printf("\n-------------------------");
    printf("\nTotal Amount : %.2f",rr);

    return 0;
}