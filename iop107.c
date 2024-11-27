/*IMPLEMENT A FUNCTION NAMED AS FLIP; WHICH WILL TAKE A NUMBER AS INPUT AND FLIP ITS
LAST N DIGITS*/
#include<stdio.h>
#include<math.h>
int flip(int num,int n){
    int lastndigit=num % (int)pow(10,n);
    int flipnum=0;
    while(lastndigit>0){
        int rem=lastndigit%10;
        flipnum= flipnum*10+rem;
        lastndigit /= 10;
    }
    num /= (int)pow(10,n);
    num = num*(int)pow(10,n)+flipnum;
    return num;
}
int main(){
    int num,n;
    printf("enter number and enter how many digits you want to enter:");
    scanf("%d %d",&num,&n);
    printf("flipped number is:%d",flip(num,n));
    return 0;
}