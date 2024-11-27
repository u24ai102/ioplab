//find total odd and even in array
 #include<stdio.h>
int main(){
    int arr[10];
    printf("enter elements of array: \n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    int odd=0,even=0;
    for(int i=0;i<10;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("total no. of odd elements are:%d \n",odd);
    printf("total no. of even elements are:%d",even);

    return 0;
}