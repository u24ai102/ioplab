#include<stdio.h>
#include<string.h>
int order(char str[],int n){
    for(int i=strlen(str)-2;i>=1;i--){
        if(str[i] != str[i-1] && str[i]>str[i-1]){
            char temp=str[i];
            str[i]=str[i-1];
            str[i-1]=temp;
            break;
        }
    }
    printf("%s",str);
    }
int main(){
    int n;
    printf("how many strings you want to take input: \n");
    scanf("%d",&n);
    char str[100];
    printf("enter strings within limit of 100 words in lower case letters");
    for(int i=1;i<=n+1;i++){
        fgets(str,100,stdin);
        order(str,n);
    }
        return 0;
}