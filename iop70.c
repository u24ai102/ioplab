// print occurence of any in an array
#include<stdio.h>
int main(){
int n;
printf("Enter size of array:");
scanf("%d",&n);
int arr[n];
printf("Enter elements of array:");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int x,count=0;
printf("Enter number for which you want to print occurence:");
scanf("%d",&x);
for(int i=0;i<n;i++){
    if(arr[i]==x){
        count++;
    }
}
printf("occurence of %d is:%d",x,count);
return 0;
}