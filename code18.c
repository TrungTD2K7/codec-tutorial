#include <stdio.h>

int main(){
    int PS , LB , PT , PE , TE ;
    printf("PS ");
    scanf("%d" , &PS );
    printf("LB ");
    scanf("%d" , &LB );
    printf("PT ");
    scanf("%d" , &PT );
    printf("PE ");
    scanf("%d" , &PE );
    printf("TE ");
    scanf("%d" , &TE );
    int sum = (PS*0.2 + LB*0.2 + PT*0.2 + PE*0.3 + TE*0.2);
    printf("Diem trung binh : %d" , sum);
    return  0;
}
