#include <stdio.h>
struct student{
        int sid;
        char name[30];
    };

void display(struct student a);

int main(){

    struct student s;
    printf("Enter the Name of student : ");
    fgets(s.name, 30,stdin);
    
    printf("Enter the SID : ");
    scanf("%d",&s.sid);
    
    display(s);

    
    return 0;
}

void display(struct student a){
    printf("SID, Name, Average of student : %d %s ",a.sid,a.name);
}