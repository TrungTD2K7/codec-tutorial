#include <stdio.h>

int main (){
    char kitu;
    scanf( "%c" , &kitu );
    if (((kitu >= 'A') && (kitu <= 'Z')) || ((kitu >= 'a') && (kitu <= 'z'))) {
        printf("Alpha");
    }
    else{
        printf("incorrect");
    }
    return 0;
}