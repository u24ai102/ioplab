/*WRITE A C PROGRAM TO READ THE TEXT FILE AND ALSO COUNT THE NUMBER OF VOWELS
PRESENT IN THE FILE.*/
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("text2.txt","r");
    int count=0;
    if(fptr== NULL){
        printf("file does not exist");
    }
    else{
        char ch=fgetc(fptr);
        while(ch != EOF){
            if(ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u'||ch == 'A'||ch == 'E'||ch == 'I'||ch == 'O'||ch == 'U'){
                count++;
            }
            ch=fgetc(fptr);
        }
    }
    printf("vowels in file are:%d",count);
    return 0;
}