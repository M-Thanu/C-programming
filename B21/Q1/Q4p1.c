#include <stdio.h>
struct student{
    int indexno;
    char name[30];
    int math_mark;
    int scitech_mark;
    int eng_mark;
};
int main(){
    int math_mark[5];
    int math_sum=0;
    for(int i=0; i<5; i++){
        printf("Enter maths marks of student %d: ",i+1);
        scanf("%d",&math_mark[i]);
        math_sum=math_sum + math_mark[i];
    }

    printf("Average : %.2f",math_sum/5.0);

    return 0;
}