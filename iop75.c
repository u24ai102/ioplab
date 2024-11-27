//results in 2d
#include<stdio.h>
#include<limits.h>
int main(){
    int marks[10][3];
    for(int i=0;i<10;i++){
        printf("Enter marks for %d student \n",i+1);
        for(int j=0;j<3;j++){
            scanf("%d",&marks[i][j]);
        }
    }
    int max=INT_MIN,max1=INT_MIN,max2=INT_MIN,max3=INT_MIN;
    int roll=-1;
    for(int i=0;i<10;i++){
            int total=0;
        for(int j=0;j<3;j++){
            total += marks[i][j];
            if(marks[i][0]>max1){
                max1=marks[i][0];
            }
            if(marks[i][1]>max2){
                max2=marks[i][1];
            }
            if(marks[i][2]>max3){
                max3=marks[i][2];
            }
        }
        printf("total marks of student %d is %d \n",i+1,total);
        if(total>max){
            max=total;
            roll=i+1;
        }
    }
    printf("highest total marks is %d of student with roll number %d \n",max,roll);
    printf("highest marks in subject 1 is:%d \n",max1);
    printf("highest marks in subject 2 is:%d \n",max2);
    printf("highest marks in subject 3 is:%d \n",max3);
    return 0;
}
