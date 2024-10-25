#include <stdio.h>
#include <string.h>

void menu();
void adduser();
void createpwd(char word[],int Age);
void changepwd();
void login();

struct account{
    int userid;
    char name[30];
    char pwd[30];
    int age;
}stu[10];
int userc=0;
int ID=0;

int main(){
    printf("Welcome to LogIn Interface");
    printf("\n");
    menu();
}

void menu(){
    printf("\nMain Menu");
    printf("\n1. Add new user.\n2. Change Password.\n3. System LogIn\n4. Exit");
    printf("\nPlease choose an option: ");
    int opnum=0;
    scanf("%d",&opnum);

    switch(opnum){
        case 1:
            adduser();
            break;
        case 2:
            changepwd();
            break;
        case 3:
            login();
            break;
        case 4:
            printf("\nThank You");
            break;
    }
}

void adduser(){
    printf("\nAdd User Section");
    printf("\nEnter User ID: ");
    scanf("%d",&stu[userc].userid);
    printf("Enter name: ");
    scanf("%s",&stu[userc].name);
    printf("Enter age: ");
    scanf("%d",&stu[userc].age);

    createpwd(stu[userc].name,stu[userc].age);
    userc++;
    printf("Account Created Successfully\n");
    menu();
}

void createpwd(char word[],int Age){
    char w[30]={0};
    char age[10];
    strcat(w,word);

    strrev(word);
    strcat(w,word);
    sprintf(age,"%d",Age);
    strcat(w,age);
    strcpy(stu[userc].pwd,w);
    printf("\nYour Password: %s\n",stu[userc].pwd);
    menu();
}

void changepwd(){
    printf("\nChange Password");
    printf("\nEnter User ID: ");
    scanf("%d",&ID);

    for (int i=0; i<userc; i++){
        if(ID==stu[i].userid){
            ID=i;
        }
    }

    printf("Enter password: ");
    scanf("%s",&stu[ID].pwd);
    printf("\nPassword change successfully\n");
    menu();
}

void login(){
    char lpwd[30];

    printf("\nSystem LogIn");
    printf("\nEnter User ID: ");
    scanf("%d",&ID);
    printf("Enter password: ");
    scanf("%s",lpwd);
    int a=0;
    for(int i=0; i<userc; i++){
        if(ID == stu[i].userid){
            a=i;
        }
    }

    int val=0;
    while(val<3){
        if(strcmp(lpwd,stu[a].pwd) == 0){
            printf("Log In Successful");
            break;
        }else{
            printf("Invalid LogIn");
            printf("\nEnter password: ");
            scanf("%s",lpwd);
        }
        val++;
    }
}

