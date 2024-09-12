#include <stdio.h>
int main(){
    int n;
    printf("Enter the limit: ");
    scanf("%d",&n);
    int fterm=0;
    int sterm=1;
    int nterm;
    for(int i=1; i<=n; i++){
        printf("%d ",fterm);
        nterm=fterm+sterm;
        fterm=sterm;
        sterm=nterm;
    }
    return 0;
}
/*for(int i=1; i<=10; i++){
        printf("%d\n",i);
    }
   for(int i=10; i>=1; i--){
        printf("%d\n",i);
    }
    for(int i=1; i<=50; i++){
       if(i%2==0){
        count=count+1;
       } 
    }
    printf("Count of even numbers from 1 to 50 is: %d",count);
    */