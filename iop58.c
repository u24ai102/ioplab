//addition of two arrays into third
#include<stdio.h>
int main(){ 
int arr1[10],arr2[10],arr3[10];
    printf("enter elements of array 1: \n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr1[i]);
    }
    printf("enter elements of array 2: \n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<10;i++){
        arr3[i]=arr1[i]+arr2[i];
    }
    printf("Elements of third array:");
    for(int i=0;i<10;i++){
        printf("%d \t",arr3[i]);
    }
return 0;
}
