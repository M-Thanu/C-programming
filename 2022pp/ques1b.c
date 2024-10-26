#include <stdio.h>
void checkEligibility(int x);
#include <stdio.h>

int main(){
    char name[30];
    char nation[30];
    char dob[25];
    int nic;

    printf("Name: ");
    fgets(name, sizeof(name),stdin);
    printf("Nationality: ");
    fgets(nation, sizeof(nation),stdin);
    printf("Date Of Birth: ");
    fgets(dob, sizeof(dob),stdin);
    printf("NIC: ");
    scanf("%d",&nic);

    checkEligibility(nic);
    
    return 0;
}
void checkEligibility(int x){
    int year=0;
    int i=0;
    while(i<4){
        year=x%10;
        x = x/10;
    }
    printf("Birth: %d\n",year);
    int a;
    a=2024-year;
    if (a>18){
        printf("You are eligible to vote");
    }else{
        printf("You are not eligible to vote");
    }
}