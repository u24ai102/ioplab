//print max of three no. using nested if
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers: \n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("max is:%d",a);
        }
        else{
             printf("max is:%d",c);
        }
    }
    else{
        if(b>c){
            printf("max is:%d",b);
        }
        else{
             printf("max is:%d",c);
        }
    }
    return 0;
}