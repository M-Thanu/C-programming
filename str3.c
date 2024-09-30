#include <stdio.h>
#include <string.h>
struct stu{
    int rollnum;
    char name[20];
    char dep[20];
    char course[20];
    int jyear;
};

void scheck(struct stu stucheck);

int main(){
    struct stu st1={001,"John","E","Civil",2023};
    struct stu st2={002,"Ravi","IT","IT",2024};
    struct stu st3={003,"Ken","E","Mech",2033};
    struct stu st4={004,"Rishi","IT","IT",2023};
    scheck (st1);
    scheck(st2);
    scheck(st3);
    scheck(st4);
    return 0;
}

void scheck(struct stu stucheck){
    if (stucheck.jyear == 2023){
        printf("%s \n",stucheck.name);
    }
}