//biggest of all integers
#include<stdio.h>
#include<limits.h>
int main(){
    int n,t;
    printf("how many numbers you want to enter: \n");
    scanf("%d",&t);
    int *ptr=&n;
    int max=INT_MIN;
    printf("enter numbers: \n");
    for(int i=0;i<t;i++){
    scanf("%d",&n);
    if(*ptr>max){
        max=*ptr;
    }
    }
    printf("max of all numbers is:%d",max);
    return 0;
}