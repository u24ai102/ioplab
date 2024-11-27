//program to check whether a no. is prime or not
#include<stdio.h>
int prime(int num);
int main(){
    int num;
    printf("enter number:");
    scanf("%d",&num);
    if(prime(num)==1){
        printf("it is not prime");
    }
    else{
        printf("it is prime");
    }
    return 0;
}
int prime(int num){
if(num<=1){
        return 1;
    }
else if(num==2){        
        return 0;
    }
    else{
    for(int i=2;i<num;i++){
        if(num % i== 0){            
            return 1;
        }        
    }
}
}