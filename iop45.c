//guessing game
#include<stdio.h>
int main(){
    int n,luckyn=7;
    printf("Guess a number from 0 to 100: \n");
    printf("you will get 4 attempts to guess a number \n");
    printf("Take your first chance: \n");
    for(int i=1;i<=4;i++){
        scanf("%d",&n);
        if(n==luckyn){
            printf("Congratulations,you have guessed lucky number in four attempts \n");
            break;
        }
        else{
            if(i==4){
                printf("Sorry,you have not guessed lucky number in four attempts \n");
            }
            else{
            printf("take another chance \n");
            }
        }
    }
    n==luckyn ? printf("you are eligible for prize") : printf("you are not eligible for prize");
}