#include<stdio.h>
int oddeven(int n);
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    if(oddeven(n)==0){
        printf("it is even");
    }
    else{
        printf("it is odd");
    }
    return 0;
}
int oddeven(int n){
    if(n%2==0){
        return 0;
    }
    else{
        return 1;
    }
}
