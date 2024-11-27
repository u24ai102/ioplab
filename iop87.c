/*A PROGRAM TO READ INFORMATION OF 10 STUDENT AND DISPLAY THE
INFORMATION OF THOSE STUDENT WHOSE MARKS ARE GREATHER THAN 500.(PASSING
ARRAY OF STRUCTURE INTO FUNCTION).*/
#include<stdio.h>
typedef struct student{
    int rollno;
    int marks;
}stu;
int main(){
    stu s[10];
   for(int i=0;i<10;i++){
    printf("enter roll no. of student %d \n",i+1);
    scanf("%d",&s[i].rollno);
   }
   for(int i=0;i<10;i++){
    printf("enter marks");
    scanf("%d",&s[i].marks);
   }
   printf("information of students with marks greater than 500:\n");
   printf("rollno marks\n");
   for(int i=0;i<10;i++){
    if((s[i].marks)>500){
    printf("%d \t",s[i].rollno);
    printf("%d \n",s[i].marks);
    }
   }
    return 0;
}