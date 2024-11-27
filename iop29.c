//program to check whether a no. is palindrome or not
#include<stdio.h>
int palindrome(int num);
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(palindrome(num)==num){
        printf("it is palindrome no.");
    }
    else{
        printf("it is not palindrome no.");

    } 
    return 0;
}

int palindrome(int num){
    int remainder,reversenum=0;
    while(num != 0){
        remainder=num%10;
        reversenum=reversenum*10 + remainder;
        num /= 10;
    }
    return reversenum;
}
