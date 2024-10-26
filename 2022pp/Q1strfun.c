#include <stdio.h>
#include <string.h>

int main(){
    char party[3];
    int vote;
    int lp=0;
    int cp=0;
    int ld=0;
    int c1=0;
    int c2=0;
    int c3=0;
    int c4=0;
    int c5=0;
    int c6=0;

    for(int i=0; i<5; i++){
        printf("party: ");
        scanf("%s",party);

        if(strcmp(party,"LP")==0){
            lp+=1;
            printf("Candidate: ");
            scanf("%d",&vote);
            switch(vote){
                case 1:
                    c1+=1;
                    break;
                case 2:
                    c2+=1;
                    break;
            }
        }else if(strcmp(party,"CP")==0){
            cp+=1;
            printf("Candidate: ");
            scanf("%d",&vote);
            switch(vote){
                case 3:
                    c3+=1;
                    break;
                case 4:
                    c4+=1;
                    break;
            }
        }else{
            ld+=1;
            printf("Candidate: ");
            scanf("%d",&vote);
            switch(vote){
                case 5:
                    c5+=1;
                    break;
                case 6:
                    c6+=1;
                    break;
            }
        }
    }

    printf("Vote count for Labour Party: %d\n",lp);
    printf("Vote count for Conservative Party: %d\n",cp);
    printf("Vote count for Liberal Democrats: %d\n",ld);

    printf("Vote count for Jhone Smith: %d\n",c1);
    printf("Vote count for Nick: %d\n",c2);
    printf("Vote count for James: %d\n",c3);
    printf("Vote count for Anjelo: %d\n",c4);
    printf("Vote count for Jolly: %d\n",c5);
    printf("Vote count for Darwin: %d\n",c6);

    return 0;
}