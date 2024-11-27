//WRITE a C PROGRAM TO COUNT THE NUMBER OF VOWELS IN A STRING USING POINTER.
#include<stdio.h>
int main(){
    char str[100];
    printf("enter string in small case:  \n");
    fgets(str,100,stdin);
    char* ptr=str;
    int count=0;
    for(int i=0;*(ptr+i) != '\0';i++){
        if(*(ptr+i)=='a' || *(ptr+i)=='e'||*(ptr+i)=='i'||*(ptr+i)=='o'||*(ptr+i)=='u' ){
            count++;
        }
    }
    printf("total vowels in string are:%d",count);
    return 0;
}