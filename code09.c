#include <stdio.h>

int main(){
    int a = 5,b = 8;
    char kitu;
    scanf("%c" , &kitu);
    switch(kitu){
        case '*' :
             printf("%d", a * b);
             break;
        case '+' :
             printf("%d", a + b);
             break;
        case '-' :
             printf ("%d", a - b );
             break;
        case '/' :
             printf("%d" , a / b);
            break;
        default:
            printf("ki tu khong hop le");    
    }
}