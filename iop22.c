//calculate factorial of no.
#include<stdio.h>
int fact(int n);
int main(){
    printf("factorial of no. is:%d",fact(10));
    return 0;
}
int fact(int n){
    if(n==0){
        return 1;
    }
    else if(n==1){
        return 1;
    }
    else{
    int facto=fact(n-1)*n;
    return facto;
    }
}