//convert sec into time
#include<stdio.h>
int main(){
    int total_sec,sec,hr,min;
    printf("enter total seconds:");
    scanf("%d",&total_sec);
    hr=total_sec/3600;
    min=total_sec/60-hr*60;
    sec=total_sec-min*60-hr*3600;
    printf("total time:%d:%d:%d \n",hr,min,sec);  
    return 0;
}