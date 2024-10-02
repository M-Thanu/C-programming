#include <stdio.h>
int main(){
    int n;
    printf("No: ");
    scanf("%d",&n);
    int n2=n;
    int c=0;
    //Finding length
    while(n!=0){
        n=n/10;
        c=c+1;  
    }
    int sum=0;
    
    for (int i=0; i<c; i++){
    
        sum=sum+(n2%10);
        n2=n2/10;
        
    }
    printf("Sum: %d",sum);
    
    return 0;
}