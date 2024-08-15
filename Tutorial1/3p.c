#include <stdio.h>

int main(){
    printf("Example Program (Escape Sequence)");
    printf("\n\t---------------------------");
    printf("\n\tEscape Sequence Meaning");
    printf("\n\t---------------------------");

    printf("\n\t\\\t\\");
    printf("\n\t\\\\\'\t\'");
    printf("\n\t\\\"\t\"");

    printf("\n\t\\\x6E\tline feed & carriage return");
    printf("\n\t\\\x74\tTab Characters or eight spaces");
    printf("\n\t\\\x62\tErase one char from right to left");
    printf("\n\t\\\x72\tperform only linefeed");


    return 0;
}