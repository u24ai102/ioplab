//count number of characters words and lines in a text file
#include<stdio.h> 

int main()
{
    FILE *fptr;
    fptr=fopen("text2.txt","r");
    int c=0,w=0,l=0;
    if(fptr== NULL){
        printf("file does not exist");
    }
    else{
        char ch=fgetc(fptr);
        while(ch != EOF){
            c++;
            if(ch == ' '){
                w++;
            }
            if(ch == '\n')l++;
            ch=fgetc(fptr);
        }
    }
    printf("characters:%d words:%d lines:%d",c,w+l+1,l+1);
    return 0;
}