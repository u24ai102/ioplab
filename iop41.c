//Read a number N and print factor of N
#include<stdio.h>
int main(){
    int n;
    printf("enter number n:");
    scanf("%d",&n);
    printf("factors of %d are:",n);
    for(int i=1;i<=n;i++){
        if(n%i == 0){
            printf("%d \n",i);
        }
    }
    return 0;
}