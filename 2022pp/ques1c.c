#include <stdio.h>
int main(){
    char parcode[120];
    int canid[10];
    int rlp=0;
    int rcp=0;
    int rld=0;
    for (int i=0; i<6; i++){
        printf("Enter your preferd party's code : ");
        scanf("%s",&parcode);
        if((parcode[0] == 'L')&&(parcode[1] == 'P')){
            rlp+=1;
        }else if((parcode[0] == 'C')&&(parcode[1] == 'P')){
            rcp+=1;
        }else if((parcode[0] == 'L')&&(parcode[1] == 'D')){
            rld+=1;
        }
        printf("Enter your preferd candidate's ID : ");
        scanf("%d",&canid[i]);
    }
    

    int r1=0;
    int r2=0;
    int r3=0;
    int r4=0;
    int r5=0;
    int r6=0;
    for (int j=0; j<6; j++){
        
        switch(canid[j]){
            case 1:
                r1+=1;
                break;
            case 2:
                r2+=1;
                break;
            case 3:
                r3+=1;
                break;
            case 4:
                r4+=1;
                break;
            case 5:
                r5+=1;
                break;
            case 6:
                r6+=1;
                break;
        }

    }
    printf("Vote count for Labour Party: %d\n",rlp);
    printf("Vote count for Conservative Party: %d\n",rcp);
    printf("Vote count for Liberal Democrats: %d\n",rld);

    printf("Vote count for Jhone Smith: %d\n",r1);
    printf("Vote count for Nick: %d\n",r2);
    printf("Vote count for James: %d\n",r3);
    printf("Vote count for Anjelo: %d\n",r4);
    printf("Vote count for Jolly: %d\n",r5);
    printf("Vote count for Darwin: %d\n",r6);
    return 0;
}