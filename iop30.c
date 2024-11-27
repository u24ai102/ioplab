//program to do reverse of no.
#include<stdio.h>
int main(){
    int num;
    printf("enter number:");
    scanf("%d",&num);
    int remainder,reversenum=0;
    while(num != 0){
        remainder = num%10;
        reversenum = reversenum*10 + remainder;
        num /= 10;
    }
    printf("%d",reversenum);
    return 0;
}