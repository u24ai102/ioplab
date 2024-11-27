//append information in file
#include<stdio.h> 
#include<stdlib.h>
int main()
{
    FILE *fptr;
    fptr=fopen("limitstudent.txt","a");
    char ch[50];
    printf("enter content for file:");
    fgets(ch,50,stdin);
    fprintf(fptr,"%s",ch);
    return 0;
}