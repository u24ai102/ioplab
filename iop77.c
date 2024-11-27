//function to check palindrome
#include<stdio.h>
int palindrome(int n){
    int remainder,reversenum=0;
    while(n != 0){
        remainder=n%10;
        reversenum=reversenum*10 +remainder;
        n /= 10;
    }
    return reversenum;
}
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    if(n==palindrome(n)){
        printf("it is palindrome");
    }
    else{
        printf("it is not palindrome");
    } 
    return 0;
}