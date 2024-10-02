#include <stdio.h>
int main(){
    struct student{
        int index;
        char name[20];
        int matmarks;
        int scimarks;
        int engmarks;
    };
    struct student s1={12,"Thanuja",95,78,78};
    struct student s2={13,"Bavanuja",75,98,48};

    printf("%s",s2.name);
    return 0;
}