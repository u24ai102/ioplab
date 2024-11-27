#include<stdio.h> 

int main()
{
    int x=5;
    int *ptr=&x;
    *ptr=10;
    printf("modified value:%d",x);
    return 0;
}