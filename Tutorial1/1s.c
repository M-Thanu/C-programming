#include <stdio.h>

int main(){
    struct student{
        int sid;
        char name[30];
        float av;
    };

    struct student s[10];

    printf("Enter the information of students: \n");
    for(int i=0; i<2; i++){
        printf("Enter the SID, Name, Average of student %d : ",i+1);
        scanf("%d %s %f",&s[i].sid,&s[i].name,&s[i].av);
        printf("\n");
    }

    printf("Show the information of students: \n");
    for(int i=0; i<2; i++){
        printf("SID, Name, Average of student %d : %d %s %.2f  ",i+1,s[i].sid,s[i].name,s[i].av);
        printf("\n");
    }
    return 0;
}