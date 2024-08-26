#include <stdio.h>
int main(){
    printf("Rectangular Solid");
    int l,w,h;
    l=10;
    w=5;
    h=6;
    int srs=(2*l*w)+(2*l*h)+(2*w*h);
    printf("\nTotal surface:%d",srs);
    int vrs=l*w*h;
    printf("\nVolume:%d",vrs);

    printf("\nCylinder");
    int p,r,hc;
    p=20;
    r=6;
    hc=5;
    int scy=(2*p*r*hc)+(2*p*r*r);
    printf("\nTotal surface:%d",scy);
    int vcy=p*r*r*hc;
    printf("\nVolume:%d",vcy);

    printf("\nCone");
    int pc,rc,sc,hc1;
    pc=20;
    rc=4;
    sc=8;
    hc1=3;
    int sco=(pc*rc*rc)+(pc*rc*sc);
    printf("\nTotal surface:%d",sco);
    int vco=(1/3)*(pc*rc*rc*hc1);
    printf("\nVolume:%d",vco);

    printf("\nSphere");
    int ps,rs;
    ps=40;
    rs=60;
    int ssp=(4*ps*rs*rs);
    printf("\nTotal surface:%d",ssp);
    int vsp=(4/3)*ps*rs*rs*rs;
    printf("\nVolume:%d",vsp);

    return 0;
}