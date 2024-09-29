 # include <stdio.h>
 int par(int m);
 int main( )
 {
    int arr[10],n;
    for (int i=0; i<=3; i++){
        printf("Enter: ");
        scanf("%d",&arr[i]);
    }
    for(int j=0; j<=3; j++){
        par(arr[j]);
    }
    return 0 ;
 }

 int par(int m){
    int sum = 0;
    sum = sum + m;
 }