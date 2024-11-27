//merge arrays into single array
#include<stdio.h>
int main(){
    int arr1[]={2,4,6,7};
    int arr2[]={2,3,7,9,11};
    int arr3[9];
    for(int i=0;i<9;i++){
        if(i<4){
            arr3[i]=arr1[i];
        }
        else{
            arr3[i]=arr2[(i+1)-5];
        }
    }
    for(int i=0;i<8;i++){
        for(int j=0;j<8-i;j++){
            if(arr3[j]>arr3[j+1]){
                int temp=arr3[j];
                arr3[j]=arr3[j+1];
                arr3[j+1]=temp;
            }
        }
    }
for(int i=0;i<9;i++){
    printf("%d \t",arr3[i]);
}
    return 0;
}