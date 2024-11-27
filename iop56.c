//find no. of +ve,0,-ve no. in array
#include<stdio.h>
int main(){
    int arr[10];
    printf("enter elements of array: \n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    int neg=0,pos=0,zero=0;
    for(int i=0;i<10;i++){
        if(arr[i]>0){
            pos++;
        }
        else if(arr[i]<0){
            neg++;
        }
        else{
            zero++;
        }
    }
    printf("total no. of positve elements:%d \t negative elements:%d \t zero elements:%d",pos,neg,zero);
    return 0;
}