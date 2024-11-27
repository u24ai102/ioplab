//colour code 
#include<stdio.h> 
enum color{red=1,yellow,blue,green,magenta,white};

int main()
{
    enum color mycolor=green;
    switch(mycolor){
        case 1:
        printf("#FF0000");
        break;
        case 2:
        printf("#FFFF00");
        break;
        case 3:
        printf("#0000FF");
        break;
        case 4:
        printf("#00FF00");
        break;
        case 5:
        printf("#FF00FF");
        break;
        default:
        printf("#000000");
        break;

    }
    return 0;
}