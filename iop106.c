//structure of items
#include<stdio.h>
typedef struct item{
    char item_name[50];
    int quantity;
    float price;
    double amount;
}item;
void items(struct item i1){
    printf("Enter item name:");
    fgets(i1.item_name,100,stdin);
    printf("Enter quantity:");
    scanf("%d",&i1.quantity);
    printf("Enter price:");
    scanf("%f",&i1.price);
    printf("Amount is:%lf",i1.quantity*i1.price);
}
int main(){
    item i1;
    items(i1);
    return 0;
}