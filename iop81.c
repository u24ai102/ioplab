//check prime
#include<stdio.h>
int prime(int n){
    for(int i=2;i<n;i++){
        if(n%i == 0){
            break;
        }
        if(i==n-1){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    if(prime(n)==0){
        printf("it is not prime number");
    }
    else{
        printf("it is prime number");  
    }
    return 0;
}