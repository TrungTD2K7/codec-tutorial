#include <stdio.h>

//A-Z : 65 - 90
//a-z : 97 - 122
//0-9 : 48 - 57 
int main(){
    char kitu;
    scanf("%c" , &kitu);
    if(( kitu>= 65) && (kitu <= 90)){
        printf("la chu in hoa");
    }
    else{
        printf("la chu in thuong");
    }
    return 0;
}    