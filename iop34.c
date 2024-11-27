//program to print fibonacchi series 
#include<stdio.h>
int main(){
    int num;
    printf("enter terms till you have to print fibonacchi series");
    scanf("%d",&num);
    int first=0,second=1,next;
    for(int i=1;i<=num;i++){
        if(i == 1){
        printf("0 \n");
        continue;
    }
    if(i == 2){
        printf("1 \n");
        continue;
    }
    next=first+second;
    first=second;
    second=next;
    printf("%d \n",next);
    }
    
    return 0;
}