//print even no. till n
#include<stdio.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    for(int i=2;i<=n;i=i+2){
        printf("%d \t",i);
    }
    return 0;
}
