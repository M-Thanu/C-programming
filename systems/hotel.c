#include <stdio.h>

void mainmenu();
void day();
void night();
void checkin();
void checkout();
void calbill();
void checkav();

int main(){
    mainmenu();
    return 0;
}

void mainmenu(){
    int a =0;
    int c=0;
    printf("\n------Main Menu------");
    printf("\n1. Spend the day package.\n2. Stay the night.\n3. Exit.");
    printf("\nSelect an option from above list:");
    printf("\n---------------------------------");
    printf("\nOption : ");
    scanf("%d",&c);
    if ((c>=1) && (c<=3)){
        a=c;
    }else{
        printf("Invalid!! Re-enter");
        scanf("%d",&c);
        a=c;
    }

    if (a==1){
        day();
    }else if(a==2){
        night();
    }else{
        printf("\nThank You. Come Again");
    }
}

void day(){
    int na=0;
    int nk=0;
    int pg=0;
    printf("\n------Spend the day package-----\n");
    printf("Number of Adults : ");
    scanf("%d",&na);
    printf("Number of Kids: ");
    scanf("%d",&nk);
    printf("Do you want to use pool/gym facility (1: yes, 2: no): ");
    scanf("%d",&pg);

    //Bill Calculation
    float sum=0;
    sum = na *6000.00 + nk *3000.00;

    if (pg == 1){
        sum = sum + (1500.00*na);
    }

    printf("\n------Spend the Day Package Bill------");
    if (pg == 1){
        printf("\nPackage Details : %d Adults, %d Kids with pool/gym facility",na,nk);
    }else{
        printf("\nPackage Details : %d Adults, %d Kids",na,nk);
    }
    printf("\nTotal Amount : %.2f",sum);
    printf("\n");
    mainmenu();
    
}

void night(){
    int nop=0;
    printf("\n-------Stay the Night Package------");
    printf("\n1. Check In.\n2. Calculate Bill.\n3.Check Out.\n4.Check Availability.");
    printf("\nSelect an option from above list: ");
    scanf("%d",&nop);
    printf("\n---------------------------------------");

    if (nop == 1){
        checkin();
    } else if(nop == 2){
        calbill();
    }else if(nop == 3){
        checkout();
    }else{
        checkav();
    }
}

void checkin(){
    int r=0;
    int avdroom[]={2,4,6,8,10,15,18,20};
    int avdsize = 8;
    int avtroom[]={22,26,28,30,35,37,38,39,40};
    int avtsize = 9;
    printf("\n----------Check In Process----------");
    printf("\nWhat is the room type you want to reserve (1: Double, 2: Triple) : ");
    scanf("%d",&r);
    printf("\n-------------------------------");

    if (r==1){
        printf("\nRoom number %d (Double room) is reserved.",avdroom[0]);
        for(int i=1; i<avdsize; i++){
            avdroom[i-1]=avdroom[i];
        }
        avdsize = avdsize -1;
    }else{
        printf("\nRoom number %d (Triple room) is reserved.",avtroom[0]);
        for(int i=1; i<avtsize; i++){
            avtroom[i-1]=avtroom[i];
        }
        avtsize = avtsize -1;
    }
     printf("\n");
    mainmenu();
}

void calbill(){
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


    printf("\n-------------Calculate Bill Process------------");
    printf("\nPackage Details: ");
    switch(rt){ 
        case 1:
            printf("\nDouble room - Half Board for %d nights",nin);
            break;
        case 2:
            printf("\nDouble room - Full Board for %d nights",nin);
            break;
        case 3:
            printf("\nTriple Room- Half Board for %d nights",nin);
            break;
        case 4:
            printf("\nTriple room - Full Board for %d nights",nin);
            break;
    }
    printf("\nTotal Amount : %.2f",rr);
     printf("\n");
    mainmenu();
}

void checkout(){
    int rn=0;
    printf("\n---------------Check Out Process---------------------");
    printf("\nEnter the room number: ");
    scanf("%d",&rn);
    printf("\n-------------------------------------");
    printf("\n---------------Check Out Process---------------------");
    printf("\nRoom %d is released and now it's available for new customers.",rn);
     printf("\n");
    mainmenu();
}

void checkav(){
    int avdroom[]={2,4,6,8,10,15,18,20};
    int avtroom[]={22,26,28,30,35,37,38,39,40};

    printf("\n----------Available room list--------------------");
    printf("\nDouble Rooms: ");
    for (int i=0; i<8; i++){
        printf("%d\t",avdroom[i]);
    }
    printf("\nTriple Rooms: ");
    for (int i=0; i<9; i++){
        printf("%d\t",avtroom[i]);
    }
     printf("\n");
    mainmenu();
}