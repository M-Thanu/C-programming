# include <stdio.h>

int main(){
    int m,x;
    float a,d;
    printf("If you are a member please enter 1, if not 0 : ");
    scanf("%d",&m);
    printf("Enter the purchase amount: ");
    scanf("%f",&a);
   
    if (m==1){
        if (a>5000.00){
            x=1;
        }else{
            x=2;
        }
    }else{
        if (a>5000.00){
            x=3;
        }else{
            x=4;
        }
    }

    switch(x){
    case 1:
        d=(15.0/100)*a;
        printf("Bill amount: %.2f",a-d);
        break;
    
    case 2:
        d=(10.0/100)*a;
        printf("Bill amount: %.2f",a-d);
        break;
    
    case 3:
        d=(7.0/100)*a;
        printf("Bill amount: %.2f",a-d);
        break;
    
    case 4: 
        d=(10.0/100)*a;
        printf("Bill amount: %.2f",a-d);
        break;
    
    case 5:
        printf("No discount.");
        break;
    
    }
    return 0;
}
