//check whether character is small case or not
#include<stdio.h>
int main(){
    char ch;
    printf("enter character:");
    scanf("%c",&ch);
    ch>='a' && ch<='z' ? printf("character is small case") : printf("character is not small case");
    return 0;
}