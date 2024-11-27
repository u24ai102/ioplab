//copy element of one array to another using pointer in reverse order
#include<stdio.h>
int main(){
int arr[4]={1,2,3,4};
int *ptr=arr;
int arr2[4];
for(int i=0;i<4;i++){
    arr2[i]=*(ptr+3-i);
}
for(int i=0;i<4;i++){
    printf("%d",arr2[i]);
}
    return 0;
}