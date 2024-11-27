//percentage of student 
#include<stdio.h>
int main(){
 float math,eng,phy,chem,bio;
 printf("enter marks of subject:");
 scanf("%f %f %f %f %f",&math,&eng,&phy,&chem,&bio);
 printf("total marks is %f \n",math+eng+phy+chem+bio);
 printf("percentage is %f",(math+eng+phy+chem+bio)/500*100);
    return 0;
}