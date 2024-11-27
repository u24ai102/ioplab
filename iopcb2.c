#include<stdio.h>
int main(){
    int N,M,a,b,k;
    printf("enter no. of empty jars and operations to be performed: \n");
    scanf("%d %d",&N,&M);
    int sum=0;
    for(int i=1;i<=M;i++){
        printf("enter a,b and k(no. of candies):");
        scanf("%d %d %d",&a,&b,&k);
        sum+=(b-a+1)*k;
    }
    float avg=sum/N;
    printf("avg number of candies are:%f",avg);
    return 0;
}
