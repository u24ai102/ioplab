//print table of any no.
#include<stdio.h>
int main(){
    int n;
    printf("enter n to print its table:");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%d \n",n*i);
    }
    return 0;
}