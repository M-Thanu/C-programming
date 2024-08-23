#include <stdio.h>
int main(){
    int nh;
    float hr,gs,dr,ded,ns;
    nh = 100;
    hr =250.00;
    gs= nh * hr;
    dr = 8.0/100;
    ded = gs * dr;
    ns = gs -ded;

    printf("Salary:%.2f",ns);
    return 0;
}