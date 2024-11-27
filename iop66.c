//add values of two matrix and store into third
#include<stdio.h>
int main(){
    int arr1[3][3];
    printf("Enter elements of array 1:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr1[i][j]);
        }
        printf("\n");
    }
    int arr2[3][3];
    printf("Enter elements of array 2:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr2[i][j]);
        }
        printf("\n");
    }
    int arr3[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d \t",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}