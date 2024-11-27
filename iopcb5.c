#include<stdio.h>
int isfibo(int n){
  int a=0,b=1,c=0;
  while(c<n){
    c=a+b;
    a=b;
    b=c;
  }
  return (c==n);  
}
int main(){
    int t,n;
    printf("how  many test cases you want:");
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        printf("enter number n:");
        scanf("%d",&n);
        if(isfibo(n)){
            printf("IsFibo \n");
        }
        else{
            printf("IsNotFibo \n");
        }
    }
    return 0;
}