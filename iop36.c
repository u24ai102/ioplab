//print odd no. till n
#include<stdio.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+2){
        printf("%d \t",i);
    }
    return 0;
}
