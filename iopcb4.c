#include<stdio.h>
#include<string.h>
int main(){
    int N;
    printf("enter number of rocks N(1<=N<=100):");
    scanf("%d",&N);
    char str[N][100];
    int gem=0;
    for (int i = 0; i<N; i++)
    {
        printf("enter elements:");
        scanf("%s",str[i]);
    }
    for(int i=97;i<=122;i++){
        int t=0;
        for(int j=0;j<N;j++){
            for(int k = 0; k<strlen(str[j]);k++)
            {
                if((int)str[j][k]==i){
                    t++;
                    break;
                }
            }
        }
        if(t==N){
            gem++;
        }
    }
    printf("%d",gem);
    return 0;
}