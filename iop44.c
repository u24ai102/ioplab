//print amount to be paid by consumer for electricity consumption
#include<stdio.h>
int main(){
    float units;
    printf("enter units of electricity consumption \n");
    scanf("%f",&units);
    if(units>0 && units<=200){
        printf("amount to be paid is:%f",units*0.5);
    }
    else if(units>=201 && units<=400){
        printf("amount to be paid is:%f",100+0.65*(units-200));
    }
    else if(units>=401 && units<=600){
        printf("amount to be paid is:%f",230+0.8*(units-400));
    }
    else if(units>600){
        printf("amount to be paid is:%f",425+1.25*(units-600));
    }
    return 0;
    }