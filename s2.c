#include <stdio.h>
#include <string.h>
struct stu{
    int rollnum;
    char name[20];
    char dep[20];
    char course[20];
    int jyear;
};

void scheck(struct stu st[], int s);
void sinput(struct stu st[], int k);
int main(){
    struct stu st1[]={{001,"John","E","Civil",2023},
                     {002,"Ravi","IT","IT",2024},
                     {003,"Ken","E","Mech",2033},
                     {004,"Rishi","IT","IT",2023}};
    sinput(st1, 4);
    return 0;
}

void scheck(struct stu st[], int s){
    for (int i=0; i<s; i++){
        if (st[i].jyear == 2023){
            printf("%s \n",st[i].name);
        }
    }  
}

void sinput(struct stu st[], int k){
    int n;
    printf("Enter the Roll Number : ");
    scanf("%d",&n);
    for (int i=0; i<k; i++){
        if (st[i].rollnum == n){
            printf("Name : %s Department : %s Course : %s Joined Year : %d \n",st[i].name,st[i].dep,st[i].course,st[i].jyear);
        }
    }  
}