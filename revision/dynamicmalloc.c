#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr;
    int n=0;
    printf("Enter count: ");
    scanf("%d",&n);
    arr=(int *)calloc(n,sizeof(int));

    if(arr == NULL){
        printf("Unsuccessful");
    }
    arr=(int *)realloc(arr,(n+2)*sizeof(int));
    int sum=0;
    for (int i=0; i<n+2; i++){
        printf("ENter: ");
        scanf("%d",&arr[i]); 
        sum += arr[i];
    }

    printf("%d\t",sum );
    free(arr);
    return 0;
}