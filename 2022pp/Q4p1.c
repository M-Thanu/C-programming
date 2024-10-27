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
    fflush(stdin);
    printf("Enter ID, NIC, Name, Address, DoB, Dep: ");
    scanf("%s %s %s %s %s %s",e1.emp_id,e1.nic,e1.name,e1.address,e1.dob,e1.dep);
    printf("Enter ID:  %s\n NIC:  %s\n Name:  %s\n Address:  %s\n DoB:  %s\n Dep:  %s\n",e1.emp_id,e1.nic,e1.name,e1.address,e1.dob,e1.dep);

    
    
    return 0;
}