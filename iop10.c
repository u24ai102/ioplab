//calculate cut off marks
#include<stdio.h>
int main(){
    int M,P,C,E,CM;
    printf("ENTER MARKS OF MATHS:");
    scanf("%d",&M);
    printf("ENTER MARKS OF PHYSICS:");
    scanf("%d",&P);
    printf("ENTER MARKS OF CHEMISTRY:");
    scanf("%d",&C);
    printf("ENTER MARKS OF ENTRANCE EXAM ");
    scanf("%d",&E);
    CM=M/2+P/2+C/2+E;
    printf("YOUR CUTOFF MARKS:%d",CM);
    return 0;
}