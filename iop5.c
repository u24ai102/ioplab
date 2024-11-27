//swap two numbers using third variable
#include<stdio.h>
int main(){
    int a=10,b=20,t=30;
    t=a;
    a=b;
    b=t;
    printf("value of a:%d \n",a);
    printf("value of b:%d",b);

    return 0;
}