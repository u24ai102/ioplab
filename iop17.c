//program to print max of three numbers using logical operator
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && b>c){
        printf("max no is:%d",a);
    }
    else if(b>a && a>c){
        printf("max no is:%d",b);
    }
    else if(c>a && a>b){
        printf("max no is:%d",c);
    }
    else if(a>c && c>b){
        printf("max no is:%d",a);
    }
    else if(b>c && c>a){
        printf("max no is:%d",b);
    }
    else if(a>b && b>c){
        printf("max no is:%d",a);
    }
    else if(c>b && b>a){
        printf("max no is:%d",b);
    }
    else{
        printf("enter different numbers");
    }
    return 0;
}