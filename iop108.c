#include<stdio.h>
int length(char str[]){
    int i=0,count=0;
    while(str[i]!='\0'){
        count++;
        i++;
    }
    return count;
}
void compare(char str1[],char str3[]){
     for(int i=0;str1[i]!='\0'|| str3[i]!='\0';i++){
        if(str1[i]>str3[i]){
            printf("1 \n");
            break;
        }
        else if(str1[i]<str3[i]){
            printf("-1 \n");
            break;
        }
        if(i==length(str1)-1 && i==length(str3)-1){
            printf("0\n");
        }
    }
}
void concat(char str1[],char str3[]){
    for(int i=0;i<length(str1)+length(str3);i++){
        if(i<length(str1)){
            printf("%c",str1[i]);
        }
        if(i>=length(str1)){
            printf("%c",str3[i-length(str1)]);
        }
    }
    printf("\n");
}
int main()
{
    //copy strings
    char str1[50]="world";
    char str2[50];
    for(int i=0;i<=length(str1);i++){
        str2[i]=str1[i];
    }
    printf("copied string:%s \n",str2);
    //compare strings
    char str3[50]="hello";
    compare(str1,str3);
    //concat strings
    concat(str1,str3);
    //reverse string
    for(int i=0,j=length(str1)-1;i<j;i++,j--){
        char temp=str1[i];
        str1[i]=str1[j];
        str1[j]=temp;
    }
    printf("reverse string is:%s",str1);
    return 0;
}