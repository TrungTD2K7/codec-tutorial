#include <stdio.h>

int main(){
    int a , b ;
    printf("hay nhap 2 so tong cua no tren 10 \n");
    printf("nhap so nguyen a : ");
    scanf("%d" , &a);
    printf("nhap so nguyen b : ");
    scanf("%d" , &b);
    int tong = a + b;
    printf(" tong cua 2 so a va b la : %d", tong );
    if( tong <= 10){
        printf(" dap an sai");
    }
     else{
            printf(" ban lam dung roi");
        }
    return 0;
}