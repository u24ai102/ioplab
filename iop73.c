//election of candidates
#include<stdio.h>
int main(){
    int voters;
    printf("enter number of voters:");
    scanf("%d",&voters);
    int arr[voters];
    printf("Enter number of candidate to which you want to vote:");
    int c1=0,c2=0,c3=0,c4=0,c5=0,spoil=0;
    for(int i=0;i<voters;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==1){
            c1++;
        }
        else if(arr[i]==2){
            c2++;
        }
        else if(arr[i]==3){
            c3++;
        }
        else if(arr[i]==4){
            c4++;
        }
        else if(arr[i]==5){
            c5++;
        }
        else{
            spoil++;
        }
    }
    printf("votes for candidate 1 are:%d \n",c1);
    printf("votes for candidate 2 are:%d \n",c2);
    printf("votes for candidate 3 are:%d \n",c3);
    printf("votes for candidate 4 are:%d \n",c4);
    printf("votes for candidate 5 are:%d \n",c5);
    printf("spoil ballot are:%d",spoil);
    return 0;
}