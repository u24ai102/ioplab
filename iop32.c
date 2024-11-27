//program to find max and second max from 'N' no.s
#include<stdio.h>
int main(){
    int n;
    int max,secondMax,cur;
    printf("enter how many numbers you want to insert:");
    scanf("%d",&n);
    if(n<2){
        printf("enter atleast two numbers");
        return 1;
    }
    printf("enter first number:");
    scanf("%d",&cur);
    max=secondMax=cur;
    printf("enter second number");
    scanf("%d",&cur);
    if(cur>max){
        secondMax=max;
        max=cur;
    }
    else{
        secondMax=cur;
    }
    for(int i=2;i<n;i++){
        printf("enter next number:");
        scanf("%d",&cur);
        if(cur>max){
        secondMax=max;
        max=cur;
        }
        else if(cur>secondMax && cur!=max){
            secondMax=cur;
        }
    }
        if(secondMax==max){
            printf("both max and second max are same");
        }
        else{
            printf("Maximum value:%d \n",max);
            printf("Second Maximum value:%d \n",secondMax);
        }
    
    return 0;
}