//coversion of temp
 #include<stdio.h>
int main(){
    float fah;
    printf("enter temp in fahrenheit:");
    scanf("%f",&fah);
    float cel=(fah-32)*5/9;
    printf("temp in celsius is:%f",cel);
    return 0;
}