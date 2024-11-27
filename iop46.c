//display hat size based on circumference
#include<stdio.h>
int main(){
    float arr[3][3]={{1.2,2.6,3.7},{4.1,5.5,6.9},{7.2,8.7,9.9}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%f \t",arr[i][j]);
        }
        printf("\n");
    }
}