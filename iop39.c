//print 1/1!+2/2!+...n
#include<stdio.h>
int facto(int n);
int  main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);    
    for (int i=1; i<=n; i++)
    {
        if(i==n){
            printf("%d/%d!",i,i);
        }
        else{
            printf("%d/%d!+",i,i);

        }
    }
    
    
    return 0;
}
