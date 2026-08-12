#include <stdio.h>
int isPrime(int n) {
	int i;
	if (n<2) return 0;
	for (i = 2; i * i <= n; i++) {
		if ( n % i == 0) return 0;
	}
	return 1;

}
void isPrime2(int n) {
	int i;
	if (n >=2)
		for (i = 2; i * i <= n; i++) {
			if (isPrime(i) == 1)
				printf("%d ",i);

		}
}
void listTheFirstNPrime(int n) {
	int i=2, count=0;
	while(count!=n) {
		if(isPrime(i)==1) {
			printf("%d ",i);
			count++;
		}
		i++;
	}
}
void sum(int n) {
	int i = 2, count = 0, S =0;
	while(count!=n) {
		if(isPrime(i)==1) {
			S = S + i;
			count++;  
		}
		i++;
	}
	printf("%d",S);
}
	int main() {
		int n;
		scanf("%d",&n);
		if(isPrime(n) == 1) {
			printf("la so nguyen to \n");
		} else {
			printf("khong phai so nguyen to\n ");
		}
		isPrime2(n);
		printf("\n");
		listTheFirstNPrime(n);
		printf("\n Sum : ");
		sum(n);
		return 0;
	}
