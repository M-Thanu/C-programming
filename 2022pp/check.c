#include <stdio.h>
struct book{
    char author[20];
    char title[20];
    int pgno;
};
void display(struct book *n);
int main(){
    struct book b1={"harry","Cp",25};
    display(&b1);
    
    return 0;
}
void display(struct book *n){
    printf("%s %s %d",n->author,n->title, n->pgno);
}