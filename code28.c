int main(){
    int a , b ;
    printf(" nhap so nguyen a : ");
    scanf( "%d" , &a);
    printf(" nhap so nguyen b : ");
    scanf( "%d" , &b);
    if( a > b ){
        printf( " a lon hon b ");
    }
    else if( b == a ){
        printf( " a bang  b ");
    }
    else{
        printf( " a be hon b");
    }
    return 0;
}