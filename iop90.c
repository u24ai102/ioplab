//including and excluding spaces count length of string
#include<stdio.h>
int exclude(char *ptr){
    int count=0;
    for(int i=0;*(ptr+i) !='\0';i++){
        if(*(ptr+i)==' '){
            count--;
        }
        count++;
    }
    return count;
}
int include(char *ptr){
    int count=0;
    for(int i=0;*(ptr+i) != '\0';i++){
        count++;
    }
    return count;
}
int main(){
    char str[100];
    printf("enter string:");
    gets(str);
    printf("length of string including spaces:%d \n",include(str));
    printf("length of string excluding spaces:%d",exclude(str));
    return 0;
}