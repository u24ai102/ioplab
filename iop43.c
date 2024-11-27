//program to calculate the commission for sales representative 
#include<stdio.h>
int main(){
    double sales;
    printf("enter sales in Rs.");
    scanf("%lf",&sales);
    if(sales<=500){
        printf("commission is Rs.%lf",sales*5/100);
    }
    else if(sales>500 && sales<=2000){
        printf("commission is Rs.%lf",35+sales/10);
    }
    else if(sales>2000 && sales<=5000){
        printf("commission is Rs.%lf",185+sales*12/100);
    }
    else if(sales>5000){
        printf("commission is Rs.%lf",sales*12.5/100);
    }
    return 0;
}