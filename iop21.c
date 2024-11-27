//program to read two no. and perform arithmetic operation using switch case
#include<stdio.h>
int main(){
    char op;
    printf("enter operator(a=addition,s=subtraction,m=multiplication,d=division)");
    scanf("%c \n",&op);
    double a,b;
    printf("enter two numbers:");
    scanf("%lf %lf",&a,&b);
    switch(op){
    case 'a':
        printf("addition is:%lf",a+b);
        break;
    case 's':
        printf("subtraction is:%lf",a-b);
        break;
    case 'm':
        printf("multiplication is:%lf",a*b);
        break;
    case 'd':
        printf("division is:%lf",a/b);
        break;
    }
    
    return 0;
}