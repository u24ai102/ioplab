//even or odd
#include<stdio.h>
int main(){
    int  num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num%2 == 0 && num>0 && (int)num == num){
        printf("given number is even");
    }
        else if(num%2 != 0 && num>0 && (int)num == num){
             printf("given number is odd");
        }
             else{
                 printf("given number is invalid");
             }
        
    
    return 0;
}