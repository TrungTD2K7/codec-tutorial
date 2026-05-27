#include <stdio.h>

int main(){
    int n ;
    scanf( " %d " , &n );
    if ( n > 100 ){
        printf (" lon hon 100 ");
    }
    else if( n < 100){
        printf( "be hon 100" );
    } 
    else {
        printf ( " bang 100 ");
    }
    return 0;
}