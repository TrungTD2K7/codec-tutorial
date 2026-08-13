#include <stdio.h>

void swap(int a , int b){
	int temp = a ; a = b; b = temp;
}
void swap2(int *a , int *b){
	int temp = *a ; *a = *b; *b = temp;
}
int main(){
	int a = 5 , b = 7;
	printf (" truoc khi swap a = %d , b = %d",a,b);
	swap(a,b);
	printf("sau khi swap in main a = %d , b = %d",a,b);
	swap2(&a,&b);
	printf("sau khi swap in main a = %d , b = %d",a,b);

}
