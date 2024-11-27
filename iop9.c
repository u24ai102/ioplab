//calculate total sec by reading time
#include<stdio.h>
int main(){
    int hr,min,sec;
    printf("enter hour:");
    scanf("%d",&hr);
    printf("enter minutes:");
    scanf("%d",&min);
    printf("enter seconds:");
    scanf("%d",&sec);
    printf("total seconds is:%d",hr*3600+min*60+sec);
    return 0;
}