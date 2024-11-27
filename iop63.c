//min and maxin 2d
#include<stdio.h>
#include<limits.h>
int main(){
    int arr[3][3];
    printf("Enter elements of array \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
        printf("\n");
    }
    printf("max element in matrix is:%d \n",max);
    printf("min element in matrix is:%d",min);

    return 0;
}
