#include <stdio.h>

int main() {
	int n = 5;
	int *pi;
	pi = &n;

	printf("giatri cua n = %d\n", n);
	printf("dia chi cua n = %x\n\n", n);

	printf("dia chi cua con tro PI = %d\n", *pi);
	printf("dia chi con tro PI den: = %x\n", pi);
	printf("dia chi cua con tro PI = %x\n", &pi);

	printf("%d\n\n", *pi);
	
	*pi = 7;
	printf("giatri cua n = %d\n", n);
	printf("dia chi cua n = %x\n\n", n);

	printf("dia chi cua con tro PI = %d\n", *pi);
	printf("dia chi con tro PI den: = %x\n", pi);
	printf("dia chi cua con tro PI = %x\n", &pi);
	return 0;
}