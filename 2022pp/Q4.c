#include <stdio.h>
#include <stdlib.h>

struct employee{
    char emp_id[10];
    char nic[12];
    char name[20];
    char address[30];
    char dob[15];
    char dep[15];
};

int main(){
    int dep_count=0;
    printf("Enter initial count: ");
    scanf("%d",&dep_count);
    

    struct employee *edep;
    edep=(struct employee*)malloc(dep_count*sizeof(struct employee));

    
    edep = (struct employee*)realloc(edep,(dep_count+2)*sizeof(struct employee));
    if(edep == NULL){
        printf("Unsuccessful");
    }
    int l_count=dep_count+2;
    for(int i=0; i<l_count; i++){
        printf("Enter name: ");
        scanf("%s",edep[i].name);
    }
    for(int i=0; i<l_count; i++){
        printf("Name: %s\n",edep[i].name);
        
    }

    free(edep);
    
    return 0;
}