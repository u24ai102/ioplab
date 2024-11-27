/*A C PROGRAM TO DECLARE A STRUCTURE WITH DATA MEMBERS EMPLOYEE NUMBER
,EMPLOYEE NAME AND BASIC PAY OF THE EMPLOYEE. DECLARE A STRUCTURE POINTER AND AN
ARRAY EMPLOY WITH 50 ELEMENTS .THE PROGRAM SHOULD READ ‘N’ EMPLOYEE DETAILS AND
PRINT THE LIST OF ALL EMPLOYEE ALONG WITH THE BASIC A PAY.*/
#include<stdio.h>
 typedef struct employee{
   int employee_no;
   char employee_name[100];
   double basicpay; 
}emp;
int main(){
    emp e[3];
    emp *ptr=e;
    for(int i=0;i<3;i++){
        printf("enter details of employee %d \n",(i+1));
        scanf("%d %s %lf",&(*(ptr+i)).employee_no,(*(ptr+i)).employee_name,&(*(ptr+i)).basicpay);
    }
    for(int i=0;i<3;i++){
        printf("details of employee %d \n",(i+1));
        printf("%d %s %lf \n",(*(ptr+i)).employee_no,(*(ptr+i)).employee_name,(*(ptr+i)).basicpay);
    }
    return 0;
}