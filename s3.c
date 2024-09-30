#include <stdio.h>
#include <string.h>
struct bank{
    int accnum;
    char name[20];
    int balance;
};

void acccheck(struct bank b[], int k);
void bop(struct bank b[], int k);
int main(){
    struct bank cust[]={{001,"John",2000},
                     {002,"Ravi",60},
                     {003,"Ken",8000},
                     {004,"Rishi",80}};
    bop(cust, 4);
    return 0;
}

void acccheck(struct bank b[], int k){
    for (int i=0; i<k; i++){
        if (b[i].balance < 100){
            printf("The balance is insufficient for the specified withdrawal");
        }
    }  
}

void bop(struct bank b[], int k){
    int a,am,code;
    printf("Enter Account Number: ");
    scanf("%d",&a);
    printf("Enter Amount: ");
    scanf("%d",&am);
    printf("Enter code: ");
    scanf("%d",&code);
    int bal = 0;
    for (int i=0; i<k; i++){
        bal = am - b[i].balance;
        if (b[i].accnum == a){
            if (code == 0){
                if (bal<100){
                    printf("The balance is insufficient for the specified withdrawal");
                }
            }
        }
        
    }
}

