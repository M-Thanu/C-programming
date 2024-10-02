#include <stdio.h>
int main(){
    char name[30];
    char dob[10];
    char nationality[20];
    char nic[10];

    printf("Enter the name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter the Date of Birth(dd/mm/yyyy): ");
    fgets(dob, sizeof(dob),stdin);
    printf("Enter the nationality: ");
    fgets(nationality, sizeof(nationality), stdin);
    printf("Enter the NIC: ");
    fgets(nic,sizeof(nic),stdin);

    printf("Name: %s",name);
    
    printf("Date of Birth: %s",dob);
    
    printf("Nationality: %s",nationality);
    
    printf("NIC: %s", nic);
    

    return 0;
}