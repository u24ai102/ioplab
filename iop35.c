//program to print a single digit answer showing sum of digit of no. N
#include<stdio.h>
int sumofdigit(int n);
int singledigit(int n);
int main(){
    int n;
    printf("enter a number n:");
    scanf("%d",&n);
    printf("single digit ans. is:%d",singledigit(n));
    return 0;
}
int sumofdigit(int n){
    int rem,sum=0;
    while(n != 0){
    rem = n%10;
    sum += rem;
    n /= 10;
    }
    return sum;
}
int singledigit(int n){
    while(n>=10){
        n = sumofdigit(n);
    }
    return n;
}