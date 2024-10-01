#include <stdio.h>

int main(){
    
    int n=0;
    printf("Enter number of students : ");
    scanf("%d",&n);
    int marks[n];
    
    for(int i=0; i<n; i++){
        printf("Enter the marks: ");
        scanf("%d",&marks[i]);
    }
    int sum=0;
    for(int i=0; i<n; i++){
        sum = sum + marks[i];
    }
    printf("Total Marks: %d",sum);
   
    
    return 0;
}