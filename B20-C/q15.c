#include <stdio.h>
#include <string.h>

struct patient{
    char id[20];
    char cat;
    int day;
};

int pCount = 0;

void addPatient(struct patient *p);
void calCharges(struct patient q[]);

int main(){
    struct patient pList[100];
    addPatient(&pList[pCount]);
    pCount+=1;
    calCharges(pList);
    return 0;
}

void addPatient(struct patient *p){
    printf("Enter ID, Category, Day");
    scanf("%s %c %d",&p->id,&p->cat,&p->day);
}

void calCharges(struct patient q[]){
    char a[30];
    int x=-1;

    printf("Patient ID: ");
    scanf("%s",a);

    for(int i=0; i<pCount; i++){
        if(strcmp(q[i].id, a) == 0){
            x=i;
            break;
        }
    }
    if(x != -1){
        float sum=0;
        sum = 1000.00*q[x].day;

        if(q[x].day > 5){
            sum = sum - (sum /10);
        }
        if (q[x].cat == 'A'){
            sum = sum + (0.02*sum);
        }

        printf("Room charge : %.2f",sum);
    }else{
        printf("Room ID not found");
    }
    
}