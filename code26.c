#include <stdio.h>

int main(){
    int i , n ;
    int sum = 0 ;
    printf(" nhap n so nguyen :  \n");
    scanf( "%d" , &n );
    for( i = 1 ; i <= n ; i++ ){
        sum = sum + i ;
    }
    printf(" tong cua n so hang la : %d \n " , sum );
    return 0;
}