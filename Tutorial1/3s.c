#include <stdio.h>

int main(){
    struct student{
        char name[30];
        int mar;
    };

    struct student s[10];

    printf("Enter the information of students: \n");
    for(int i=0; i<2; i++){
        printf("For roll number %d \n",i+1);
        printf("Enter name: ");
        scanf("%s",s[i].name);
        printf("Enter marks: ");
        scanf("%d",&s[i].mar);
        printf("\n");
    }

    printf("Displaying the information of students: \n");
    for(int i=0; i<2; i++){
        printf("Information for roll number %d \n",i+1);
        printf("Name: %s\n",s[i].name);
        printf("Marks: %d",s[i].mar);
        printf("\n");
    }
    return 0;
}