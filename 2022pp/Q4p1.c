#include <stdio.h>
#include <stdlib.h>

struct employee{
    char emp_id[10];
    char nic[12];
    char name[20];
    char address[30];
    char dob[15];
    char dep[15];
}e1;

int main(){
    printf("Enter ID: ");
    scanf("%s",e1.emp_id);
    printf("Enter NIC: ");
    scanf("%s",e1.nic);
    printf("Enter Name: ");
    scanf("%s",e1.name);
    printf("Enter Address: ");
    scanf("%s",e1.address);
    printf("Enter Dob: ");
    scanf("%s",e1.dob);
    printf("Enter Dep: ");
    scanf("%s",e1.dep);

    printf("Enter ID: %s\n",e1.emp_id);
    printf("Enter NIC: %s\n",e1.nic);
    printf("Enter Name: %s\n",e1.name);
    printf("Enter Address: %s\n",e1.address);
    printf("Enter dob: %s\n",e1.dob);
    printf("Enter dep: %s\n",e1.dep);
    
    
    return 0;
}