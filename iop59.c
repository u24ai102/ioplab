//interchange values of two arrays
#include<stdio.h>
int main(){
int arr1[10],arr2[10];
    printf("enter elements of array 1: \n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr1[i]);
    }
    printf("enter elements of array 2: \n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<10;i++){
       int temp=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=temp;
    }
    printf("Elements of first array: \n");
    for(int i=0;i<10;i++){
        printf("%d \t",arr1[i]);
    }
    printf("Elements of second array: \n");
    for(int i=0;i<10;i++){
        printf("%d \t",arr2[i]);
    }
    return 0;
} 