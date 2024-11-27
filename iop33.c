//program to printout max and min from 'N' nos.
#include<stdio.h>
int main(){
    int n,max,min,cur;
    printf("enter number of elements you want to enter:");
    scanf("%d",&n);
    printf("enter first number:");
    scanf("%d",&cur);
    max=min=cur;
    for(int i=1;i<n;i++){
        printf("enter next number:");
        scanf("%d",&cur);
    if(cur>max){
        max=cur;
    }
    if(cur<min){
        min=cur;
    }
    }
    printf("maximum number is:%d \n",max);
    printf("minimum number is:%d",min);
    return 0;
}