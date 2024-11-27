//swap two numbers without using third variable
#include<stdio.h>
int main(){
    int a=10,b=20;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("value of a:%d",a);
    printf("value of b:%d",b);

    return 0;
}