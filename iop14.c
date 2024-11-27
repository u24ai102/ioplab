//identify char as capital,samll,digit and special symbol
#include<stdio.h>
int main(){
    char ch;
    printf("enter character:");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("character is capital letter");
    }
    else if(ch>='a' && ch<='z'){
        printf("charcter is small case");
    }    
    else if(ch>='0' && ch<='9'){
        printf("charcter is digit");
    }
        else{
            printf("charcter is special symbol");
        }
    
     return 0;
}