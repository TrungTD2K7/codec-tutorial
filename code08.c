#include <stdio.h>

// luyen tap neu no la chu thi in alpha neu khong phai thi in incorrect
int main(){
    char kitu;
    printf(" Hãy viết 1 chữ cái bất kì ");
    scanf("%c" , &kitu);
    if(( kitu >= 'A') && ( kitu <= 'Z') || ( kitu >= 'a') && ( kitu <= 'z')){
        printf ("Alpha");
    }
    else{
        printf("occho");
    }
    return 0;
}