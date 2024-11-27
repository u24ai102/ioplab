/*WRITE A C PROGRAM TO SORT THE GIVEN N NUMBER OF STRINGS IN ASCENDING ORDER USING
POINTERS.*/
#include<stdio.h>
#include<string.h>
int comparestr(char *a,char *b){
    return strcmp(a,b);
}
int main(){
    int n;
    printf("how many strings you want to enter:");
    scanf("%d",&n);
    char str[n][100];
    getchar();
    for(int i=0;i<n;i++){
        printf("enter string %d \n",i+1);
        fgets(str[i],100,stdin);        
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(comparestr(str[j],str[j+1])>0){
                char temp[100];
                strcpy(temp,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],temp);
            }
        }
    }
    for(int i=0;i<n;i++){
            printf("%s \n",str[i]);
        }
    return 0;
}