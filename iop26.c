//print sum of all odd and even no. b/w 1 to N
#include<stdio.h>
int main(){
    int N;
    printf("enter N:");
    scanf("%d",&N);
    int sumO=0;
    for(int i=1;i<=N;i=i+2){
        sumO=sumO+i;
    }
    printf("sum of odd no.:%d \n",sumO);
    int sumE=0;
    for(int i=0;i<=N;i=i+2){
        sumE=sumE+i;
    }
    printf("sum of even no.:%d",sumE);
    return 0;
}
