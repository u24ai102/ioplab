//selection sort 
#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5]={11,10,9,8,6};
    for(int i=0;i<4;i++){
        int min=INT_MAX;
        int minidx=-1;
        for(int j=i;j<5;j++){
          if(arr[j]<min){
            min=arr[j];
            minidx=j;
          }  
        }
        int temp=arr[i];
        arr[i]=arr[minidx];
        arr[minidx]=temp;
    }
    for(int i=0;i<5;i++){
        printf("%d \t",arr[i]);
    }
    return 0;
}