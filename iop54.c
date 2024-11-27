//sum of elements in array
#include<stdio.h>
int main(){
    int arr[10];
    printf("enter elements of array: \n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<10;i++){
        sum += arr[i];
    }
    printf("sum of numbers is:%d",sum);
    return 0;
}