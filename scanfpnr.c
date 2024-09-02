#include <stdio.h>
int main(){
    printf("Rectangular Solid\n");
    int l,w,h;
    printf("Enter the length of rectangular solid: ");
    scanf("%d",&l);
    printf("Enter the width of rectangular solid: ");
    scanf("%d",&w);
    printf("Enter the height of rectangular solid: ");
    scanf("%d",&h);
    int srs=(2*l*w)+(2*l*h)+(2*w*h); 
    printf("Total surface:%d",srs);
    int vrs=l*w*h;
    printf("\nVolume:%d",vrs);

    const float pi=3.145;
    printf("\n\nCylinder");
    int r,hc;
    printf("\nEnter the radius of cylinder:");
    scanf("%d",&r);

    printf("Enter the height of cylinder:");
    scanf("%d",&hc);
    
    int scy=(2*pi*r*hc)+(2*pi*r*r);
    printf("Total surface:%d",scy);
    int vcy=pi*r*r*hc;
    printf("\nVolume:%d",vcy);

    printf("\n\nCone");
    int rc,sc,hc1;
    printf("\nEnter surface of cone: ");
    scanf("%d",&sc);
    printf("Enter height of cone: ");
    scanf("%d",&hc1);
    printf("Enter radius of cone: ");
    scanf("%d",&rc);

    int sco=(pi*rc*rc)+(pi*rc*sc);
    printf("Total surface:%d",sco);
    int vco=(1.0/3)*(pi*rc*rc*hc1);
    printf("\nVolume:%d",vco);

    printf("\n\nSphere");
    int rs;
    printf("\nEnter the radius of sphere: ");
    scanf("%d",&rs);
    int ssp=(4*pi*rs*rs);
    printf("Total surface:%d",ssp);
    int vsp=(4/3)*pi*rs*rs*rs;
    printf("\nVolume:%d",vsp);

    return 0;
}
