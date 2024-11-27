//find length of string
#include<stdio.h>
int countn(char str[]){
    int i=0,count=0;
    while(str[i] != '\0'){
        count++;
        i++;
    }
        return count;
    }
int main(){
    char str[50];
    printf("enter string:\n");
    gets(str);
    printf("length of string is:%d",countn(str));
    return 0;
}