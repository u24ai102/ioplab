//simple calculator using switch case
#include<stdio.h>
int main(){
    char operator;
    double a,b;
    printf("enter operator");
    scanf("%c",&operator);
    printf("enter a and b");
    scanf("%lf %lf",&a,&b);

    switch(operator){
    case '+':
        printf("addition is:%lf",a+b);
        break;
    case '-':
        printf("subtraction is:%lf",a-b);
        break;
    case '*':
        printf("multiplication is:%lf",a*b);
        break;
    case '/':
        printf("division is:%lf",a/b);
        break;
    }
    return 0;
}