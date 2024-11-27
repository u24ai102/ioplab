//gross salary
#include<stdio.h>
int main(){
    int h,b,o;
    printf("enter basic salary:");
    scanf("%d",&b);
    printf("enter HRA salary:");
    scanf("%d",&h);
    printf("enter other allowances salary:");
    scanf("%d",&o);
    printf("gross salary is:%d",h+b+o);
    return 0;
}