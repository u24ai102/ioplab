//program to print if N is prime or composite 
#include<stdio.h>
int check(int n);
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    if(n == 1){
        printf("it is neither prime nor composite");
    }
    else{
    if(check(n) == 0){
        printf("it is composite no.");
    }
        else{
            printf("it is prime no.");
        }
    }
    return 0;
}
int check(int n){
    for(int i=2;i<n;i++){
        if(n%i == 0){
            return 0;
        }
    }
}