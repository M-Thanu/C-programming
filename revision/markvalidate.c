#include <stdio.h>
int main(){
    int marks[3];
    int val=0;


    for(int i=0; i<3; i++){
        printf("Enter marks: ");
        scanf("%d",&val);
        if((val>0)&&(val<=100)){
            marks[i]=val;
        }else{
            printf("\nOutof Range\n");
            i=i-1;
            
        }
    }
    for (int j=0; j<3; j++){
        printf("%d \t",marks[j]);
    }
    return 0;
}