//interchange two variables
#include<stdio.h>
void interchange(int x,int y){
    int temp=x;
    x=y;
    y=temp;
    printf("x is %d,y is %d",x,y);
}
int main(){
    int x,y;
    printf("enter x and y:");
    scanf("%d %d",&x,&y);
    interchange(x,y);
    return 0;
}