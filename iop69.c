//linear search on array
#include<stdio.h>
#include<stdbool.h>
int main(){
    int x;
    printf("enter a number that you want from array: \n");
    scanf("%d",&x);
    int arr[6]={1,4,5,2,7,8};
    bool flag=false;
    for(int i=0;i<6;i++){
        if(arr[i]==x){
            flag=true;
        }
    }
    if(flag==true){
        printf("%d is element of array",x);
    }
    else{
        printf("%d is not the element  of array",x);
    }
    return 0;
}