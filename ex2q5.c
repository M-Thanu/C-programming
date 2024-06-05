#include <stdio.h>

void displayClass(float gpa){
    if (gpa >= 3.70){
        printf("First Class");
    }
    else if (gpa >= 3.30 && gpa <= 3.70){
        printf("Second Upper");
    }
    else if (gpa >= 3.00 && gpa <= 3.30){
        printf("Second Lower");
    }
    else{
        printf("Some error");
    }
}

int main(){
    int year;
    float agpa;
    float tgpa;

    printf("Enter the number of academic years: ");
    scanf("%d",&year);

    for (int i=1; i<year+1; i++){
        printf("Enter the GPA of year %d : ",i);
        scanf("%f",&agpa);
        tgpa = tgpa + agpa;
    }

    float dgpa = tgpa/year;

    displayClass(dgpa);

    return 0;
}

