//program to print sum of individual digit of a 'N' digit no.
#include<stdio.h>
int main(){
    int num;
    printf("enter number:");
    scanf("%d",&num);
    int remainder,sum=0;
    while(num != 0){
        remainder=num%10;
        sum += remainder;
        num /= 10;
    }
    printf("sum of digits is:%d",sum);
    return 0;
}