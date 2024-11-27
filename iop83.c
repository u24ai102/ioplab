//print max.
#include<stdio.h>
#include<limits.h>
int max(int arr[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
    }
    }
    return max;
}
int main(){
    int arr[6]={3,45,67,34,69,70};
    printf("max element is :%d",max(arr,6));
    return 0;
}