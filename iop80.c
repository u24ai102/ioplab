//fibonacci sequence
#include<stdio.h>
int fibo(int n);
int main(){
    int n=6;
for(int i=1;i<=n;i++){
    printf("%d \t",fibo(i));
}
    return 0;
}
int fibo(int n){
    
        if(n == 1){
            return 1;
        }
        if(n == 0){
            return 0;
            
    }
    else{
    int fibon=fibo(n-1)+fibo(n-2);
    return fibon;
    }
}