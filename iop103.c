//macro to find biggest of two numbers
#include<stdio.h> 
#define max(a,b) a>b?a:b
int main()
{
    int a,b;
    printf("enter a and b respectively:");
    scanf("%d %d",&a,&b);
    printf("max number is:%d",max(a,b));
    return 0;
}