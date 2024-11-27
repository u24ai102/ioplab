//reverse an array
#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6};
    int i=0,j=5;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    printf("Reverse array is: \n");
    for(int i=0;i<6;i++){
        printf("%d \n",arr[i]);
    }
    return 0;
}