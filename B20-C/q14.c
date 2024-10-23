#include <stdio.h>
int main(){
    int ca=0;
    int cb=0;
    int cc=0;
    int cd=0;

    char strgr[5]={'A','B','C','A','D'};

    for(int i=0; i<5; i++){
        switch(strgr[i]){
            case 'A':
                ca+=1;
                break;
            case 'B':
                cb+=1;
                break;
            case 'C':
                cc+=1;
                break;
            default:
                cd+=1;
                break;
        }
    }
    printf("A : %d\n",ca);
    printf("B : %d\n",cb);
    printf("C : %d\n",cc);
    printf("D : %d\n",cd);
    return 0;
}