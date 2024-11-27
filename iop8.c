//conversion of time in days,hours,minutes
#include<stdio.h>
int main(){
    float t=31558150;
    printf("time conersion in minutes:%f \n",t/60);
    printf("time conersion in hours:%f \n",t/3600);
    printf("time conersion in days:%f",t/86400);
    return 0;   
}