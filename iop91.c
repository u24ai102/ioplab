//square and cube using pointers
#include<stdio.h>
int main(){
    int n;
    int *ptr=&n;
    printf("enter number:");
    scanf("%d",&n);
    printf("square of number is:%d \n",(*ptr)*(*ptr));
    printf("cube of number is:%d \n",(*ptr)*(*ptr)*(*ptr));
    return 0;
}