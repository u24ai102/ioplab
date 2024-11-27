//pivot element
#include<stdio.h>
int findPivot(int arr[],int low,int high){
    if(low==high){
        return low;
    }
    if(arr[low]<arr[high]){
        return low;
    }
    int mid=(low + high)/2;
    if(mid<high && arr[mid]>arr[mid+1]){
        return mid+1;
    }
    if(mid>low && arr[mid]<arr[mid-1]){
        return mid;
    }
    if(arr[low]<=arr[mid]){
        return findPivot(arr,mid+1,high);
    }
    else{
        return findPivot(arr,low,mid-1);
    }
}
int main(){
    int arr[]={34,12,8,9,18,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int pivotindex=findPivot(arr,0,n-1);
    if(pivotindex != -1){
        printf("the pivot element is %d \n",arr[pivotindex]);
    }
    else{
        printf("No pivot element found");
    }
    return 0;
}