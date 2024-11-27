//rotate an array by n positions
#include<stdio.h>
void rotate(int arr[],int m,int n);
int main(){
    int arr[]={1,2,3,4,5,6};
    int n;
    printf("enter by how many positions you want to rotate array");
    scanf("%d",&n);
    rotate(arr,0,5);
    rotate(arr,0,n-1);
    rotate(arr,n,5);
    for(int i=0;i<6;i++){
        printf("%d \t",arr[i]);
    }
    return 0;
}
void rotate(int arr[],int m,int n){
    int j=n,i=m;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++,j--;    
        }
    
}
