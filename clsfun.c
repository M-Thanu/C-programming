#include <stdio.h>
int main(){
    //Getting student count
    int n=0;
    printf("Enter student count: ");
    scanf("%d",&n);

    //Getting index and marks from student
    char sid[n][1];
    float smar[n][4];
    float a=0.00;

    for(int i=0; i<n; i++){
        printf("Enter id: ");
        scanf("%s",sid[i]);
        for (int j=0; j<3; j++){
            printf("Enter marks: ");
            scanf("%f",&a);
            if((a<0)||(a>100)){
                printf("Error input! Try Again!\n");
                j=j-1;
                continue;
            }else{
                smar[i][j] = a;
            }
        }

    }

    //Adding individual marks
    
    float eachavg[n];
    float sum=0.00;
    float eavg=0.00;
    for (int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            sum = sum + smar[i][j];
        }
        eachavg[i] = (float)sum/3;  
        sum=0; 
    }

    //Finding class average and max,min average
    float clsavg=0.00;
    float savg=0.00;
    for(int i=0; i<n; i++){
        savg=savg+eachavg[i];
    }
    clsavg = (float)savg/n;
    float maxavg=0;
    float minavg=100.00;
    for(int i=0; i<n; i++){
        if(eachavg[i]>maxavg){
            maxavg=eachavg[i];
        }
    }
    for(int i=0; i<n; i++){
        if(eachavg[i]<minavg){
            minavg=eachavg[i];
        }
    }
    printf("\nClass Average: %.2f",clsavg);
    printf("\nMaximum Average: %.2f",maxavg);
    printf("\nMinimum Average: %.2f\n",minavg);

    //Finding grades
    char clsgr[n];
    for(int i=0; i<n; i++){
        if((eachavg[i]<100.00) && (eachavg[i]>=75.00)){
            clsgr[i]='A';
        }
        else if((eachavg[i]<75.00) && (eachavg[i]>=65.00)){
            clsgr[i]='B';
        }
        else if((eachavg[i]<65.00) && (eachavg[i]>=55.00)){
            clsgr[i]='C';
        }else{
            clsgr[i]='F';
        }
    }
    for (int i=0; i<n; i++){
        printf("\nStudent ID : %s",sid[i]);
        printf("\nStudent Average : %.2f",eachavg[i]);
        printf("\nStudent Grade : %c",clsgr[i]);
    }
    printf("\n\n");
    //Counting grades3

    int ra=0;
    int rb =0;
    int rc= 0;
    int rf=0;
    for(int i=0; i<n; i++){
        switch(clsgr[i]){
            case 'A':
                ra+=1;
                break;
            case 'B':
                rb+=1;
                break;
            case 'C':
                rc+=1;
                break;
            default:
                rf+=1;
        }
    }

    printf("Number of A's : %d\n",ra);
    printf("Number of B's : %d\n",rb);
    printf("Number of C's : %d\n",rc);
    printf("Number of F's : %d\n",rf);

    return 0;
}