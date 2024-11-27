//A PROGRAM TO COPY A STRING IN REVERSE ORDER TO ANOTHER STRING VARIABLE USING
//POINTERS
#include<stdio.h>
#include<string.h>
int main(){
    char str1[]="avantika";
    char *ptr=str1;
    char str2[100];
    for(int i=0,j=strlen(ptr)-1;i<j;i++,j--){
        char temp=*(ptr+i);
        *(ptr+i)=*(ptr+j);
        *(ptr+j)=temp;
    }
    strcpy(str2,ptr);
    printf("%s",str2);
}