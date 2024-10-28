#include <stdio.h>
int Av(int *mark, int num);
int main(){
    int arr[3]={90,70,80};
    int k;
    k=Av(&arr[0],3);
    printf("%d",k);
    return 0;
}

int Av(int *mark, int num){
    int sum=0;
    for(int j=0; j<num; j++){
        sum = sum + *mark;
        mark+=1;
    }
    int av;
    av=sum/num;
    return av;
}