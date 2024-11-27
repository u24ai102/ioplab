//read numbers till a negative number is entered and calculate sum of list of numbers read
#include<stdio.h>
int main(){
    int num;
    printf("enter numbers till a negative no.");
    int sum=0;
    num=1;
    /*do{
        scanf("%d",&num);
        sum += num;
    }while(num>0);*/
    while(num>0){
        scanf("%d",&num);
        sum += num;
    }
    printf("sum of list of numbers is:%d",sum);
    return 0;
}