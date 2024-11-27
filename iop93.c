//count words in a string
#include<stdio.h>
int main(){
    char str[100];
    printf("enter string");
    fgets(str,100,stdin);
    int words=0;
    char *ptr=str;
    for(int i=0;*(ptr+i) != '\0';i++){
        if(*(ptr+i)==' ')words++;
    }
    printf("number of words in string are:%d",words+1);
    return 0;
}