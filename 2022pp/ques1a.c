#include <stdio.h>

int main(){
    char name[30];
    char nation[30];
    char dob[25];
    char nic[20];

    printf("Name: ");
    fgets(name, sizeof(name),stdin);
    printf("Nationality: ");
    fgets(nation, sizeof(nation),stdin);
    printf("Date Of Birth: ");
    fgets(dob, sizeof(dob),stdin);
    printf("NIC: ");
    fgets(nic, sizeof(nic),stdin);

    printf("Name: %s\n",name);
    printf("Nationality: %s\n",nation);
    printf("Date Of Birth: %s\n",dob);
    printf("NIC: %s\n",nic);
    
    return 0;
}