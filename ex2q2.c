# include <stdio.h>

int main(){
    
    char name[50];
    char id[30];
    int dst;
    float af;
    float tf=200.00;

    printf("Enter your name : ");
    scanf("%s",&name);

    printf("Enter your ID : ");
    scanf("%s",&id);

    printf("Enter your duration of study : ");
    scanf("%d",&dst);

    printf("Name : %s \n ID : %s \n Duration of Study : %d \n",name,id,dst);
    printf("Annual Fee :\n");
    printf("Year 1: $200\n");

    for (int i=1; i<dst; i++){
        af = 200.00+200.00 * (5.00/100.00) * i;
        printf("Year %d: $%.2f\n", i+1,af);
        tf = tf + af;
    }

    printf("Total Fee: $%.2f",tf);

    return 0;
}