#include <stdio.h>
int main(){
    int n;
    printf ( " nhap so duoi 3 ");
    scanf("%d", &n);
    switch(n){
        case 1:
        printf(" so 1 ");
        break ;
        case 2 :
        printf( " so 2 ");
        break;
        case 3 :
        printf (" so 3 ");
        break;
        default :
        printf ( " oc cac ");
    }
    return 0;
}