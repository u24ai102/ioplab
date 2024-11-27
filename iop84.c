//display information of book
#include<stdio.h> 
struct book{
    char title[100];
    char author[50];
    int publishyear;
};
void input(struct book b){
    printf("enter title of book:");
    fgets(b.title,100,stdin);
    printf("enter author name of book:");
    fgets(b.author,100,stdin);
    printf("enter publish year of book:");
    scanf("%d",&b.publishyear);
    getchar();
    printf("title of book:%s \n",b.title);
    printf("author of book:%s \n",b.author);
    printf("publish year of book:%d",b.publishyear);
}
int main()
{
    struct book b1;
    input(b1);
    return 0;
}