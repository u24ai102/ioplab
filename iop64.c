//sum of elements of rows
#include<stdio.h>
int main(){
    int arr[3][3];
    printf("Enter elements of array \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum += arr[i][j];
        }
        printf("sum of elements of %d row is:%d",i,sum);
        printf("\n");
    }
    return 0;
}