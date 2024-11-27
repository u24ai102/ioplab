//read marks of five subjects and print division
#include<stdio.h>
int main()
{
   int math,comp,chem,phy,bio,marks;
   float per;
   printf("enter your marks of math \n");
   scanf("%d",&math);
   printf("enter your marks of chem \n");
   scanf("%d",&chem);
   printf("enter your marks of phy \n");
   scanf("%d",&phy);
   printf("enter your marks of comp \n");
   scanf("%d",&comp);
   printf("enter your marks of bio \n");
   scanf("%d",&bio);
   marks=math+comp+chem+phy+bio;
   per=(marks)/5;
if(per>=90){
   printf("your grade is A+");
}
else if(per>80 && per<90){
printf("your grade is A");
}
else if(per>70 && per<=80){
printf("your grade is B");
}
else if(per>60 && per<=70){
printf("your grade is C");
}
else if(per>50 && per<=60){
    printf("your grade is D");
}
else if(per>40 && per<=50){
printf("your grade is E");
}
else if(per<40 && per<=33){
printf("your grade is F");
}
else{
   printf("You are fail");
}
   return 0;
}