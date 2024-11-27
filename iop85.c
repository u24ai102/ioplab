//check whether character is vowel or not
#include<stdio.h>
void vowel(char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        printf("it is vowel");
    }
    else{
        printf("it is not vowel");
    }
}
int main(){
    char c;
    printf("enter small case character:");
    scanf("%c",&c);
    vowel(c);
    return 0;
}
