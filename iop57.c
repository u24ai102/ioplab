//max. and second max. in array
#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=INT_MIN;
    int secondMax=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            secondMax=max;
            max=arr[i];            
        }
        else if(arr[i]>secondMax){
            secondMax=arr[i];
        }
    }
    printf("Maximum no.:%d \t Second maximum no.:%d",max,secondMax);
    return 0;
}