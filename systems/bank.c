#include <stdio.h>

struct account{
    int accnum;
    char name[30];
    float balance;
};
int A=0;
struct account novacc[5];

int acc_count=0;

void menu();
void addacc();
void depacc();
void withacc();
void disacc();

int main(){
    menu();
    
}

void menu(){
    int opnum=0;
    printf("Main Menu");
    printf("\n1. Add new accounts.\n2. Deposit Money.\n3. Withdraw money.\n4. Display account information.\n5. Exit.");
    printf("\nPlease choose an option number: ");
    scanf("%d",&opnum);
    switch(opnum){
        case 1:
            addacc();
            break;
        case 2:
            depacc();
            break;
        case 3:
            withacc();
            break;
        case 4:
            disacc();
            break;
        case 5:
            printf("Thank You.");
            break;
    }
    
}

void addacc(){
    printf("\nAdd Account Sector");
    if(acc_count<5){
        printf("\nEnter Account No: ");
        scanf("%d",&novacc[acc_count].accnum);
        printf("Enter Name: ");
        scanf("%s",&novacc[acc_count].name);
        printf("Enter amount: ");
        scanf("%f",&novacc[acc_count].balance);
        printf("Account created successfully");
        acc_count++;
    }else{
        printf("\nMaximum accounts created");
    }
    printf("\n");
    menu();
}

void depacc(){
    printf("\n Deposite Money Sector");
    float amount=0;
    int ano=0;

    printf("\nEnter the account number: ");
    scanf("%d",&ano);
    printf("Enter the amount to deposit: ");
    scanf("%f",&amount);

    for(int i=0; i<=acc_count; i++){
        if(novacc[i].accnum == ano){
            A=i;
        }
    }
    novacc[A].balance +=amount;
    printf("\nDeposit Successful");
    printf("\n");
    menu();

}

void withacc(){
    printf("\nWithdraw Account Sector");
    int accnum=0;
    float am=0;
    printf("\nEnter the account number: ");
    scanf("%d",&accnum);
    printf("Enter amount to withdraw: ");
    scanf("%f",&am);

    for(int i=0; i<=acc_count; i++){
        if(novacc[i].accnum == accnum){
            A=i;
        }
    }

    if((am<novacc[A].balance) && (novacc[A].balance >= 500.00)){
        novacc[A].balance-=am;
    }else{
        printf("\nInsufficient Fund");
    }
    printf("\nWithdrawl Successful");
    printf("\n");
    menu();
}

void disacc(){
    printf("\nDisplay Account Sector");
    int accnum=0;
    printf("\nEnter the account number: ");
    scanf("%d", &accnum);

    for(int i=0; i<=acc_count; i++){
        if(novacc[i].accnum == accnum){
            A=i;
        }
    }
    printf("\nAccount number: %d",accnum);
    printf("\nName: %s", novacc[A].name);
    printf("\nBalance: %.2f", novacc[A].balance);
    printf("\n");
    menu();
}