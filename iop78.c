//to check whether no. is armstrong or not
#include<stdio.h>
#include<math.h>
int countn(int num);
int armstrong(int num);
int main(){
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if(armstrong(num)==num){
        printf("it is armstrong number");
    }
    else{
        printf("it is not armstrong number");

    }
    return 0;
}
int countn(int num){
    int count=0;
    while(num != 0){
        num /= 10;
        count++;
            }
    return count;
}
int armstrong(int num){
    int n=countn(num);
    double result = 0,remainder;
    while(num != 0){
        remainder = num % 10;
        result += pow(remainder,n);
        num /= 10;
        }
        return result;
}