//NCR calculation
#include<stdio.h>
float fact(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
float ncr(int n,int r){
   float NCR=fact(n)/(fact(r)*fact(n-r));
   return NCR;
}
int main(){
    int n,r;
    printf("enter n and r:");
    scanf("%d %d",&n,&r);
    printf("NCR of given numbers is:%f",ncr(n,r));
    return 0;
}