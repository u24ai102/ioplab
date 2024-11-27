//find digits
int digit(int n){
int temp=n,count=0;
while(n!=0){
    int rem=0;
    rem=n%10;
    if(temp%rem==0){
        count++;
    }
    n /= 10;
}
return count;
}
#include<stdio.h>
int main(){
    int T;
    printf("how many test cases you want(1 to 15):");
    scanf("%d",&T);
    double N;
    for(int i=1;i<=T;i++){
    printf("Enter number N between 0 to 10^10");
    scanf("%lf",&N);
    printf("number of positions where digits exactly divides N in case %d is:%d \n",i,digit(N));
    }
    return 0;
}