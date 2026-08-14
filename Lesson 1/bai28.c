#include <stdio.h>
void display(int a[], int n){
	int i;
	for (i=0; i<n; i++)
		printf("%d ", a[i]);
	printf("\n");	
}
void displayReverse(int a[], int n){
	int i;
	for (i=n-1; i>=0; i--)
		printf("%d ", a[i]);
	printf("\n");	
}

void inputArr(int a[], int n){
	int i;
	for (i=0; i<n; i++){
//		printf("a[%d] = ", i); 
		scanf("%d", &a[i]);
	}
}
int getMax(int a[], int n){
	int i, max=a[0];
	for (i=1; i<n; i++)
		if (a[i]>max) max=a[i];
	return max;	
}
int getMin(int a[], int n){
	int i, max=a[0];
	for (i=1; i<n; i++)
		if (a[i]<max) max=a[i];
	return max;	
}
int countEven(int a[],int n){
	int i ;
	int dem = 0;
	for (i=0; i<n; i++){
		if( a[i] % 2 == 0){
			dem++;
		}
	}
	return dem;
}
int countOdd(int a[],int n){
	int i ;
	int dem = 0;
	for (i=0; i<n; i++){
		if( a[i] % 2 == 1){
			dem++;
		}
	}
	return dem;
}
int getFirtpos(int a[],int n, int x){
	int i , pos = -1;
	for( i = 0 ; i < n ; i++){
		if((a[i] == x)){
			pos=i;break;
		}
	}
	return pos;
}
void getAllpost(int a[],int n, int x){
	int i , post = -1;
	for( i = 0 ; i < n ; i++){
		if((a[i] == x)){
			post=i;
			printf ("vi tri thay so %d la %d\n",x,post);
			post = 1;
		}
		if(post == -1){
			printf(" deo co ma tim ");
		}
		
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	inputArr(arr,n);
	printf("OUTPUT\n");
	display(arr,n);
	displayReverse(arr,n);
	printf("\nThe maximum value: %d", getMax(arr,n));
	printf("\nThe minimum value: %d", getMin(arr,n));
	printf("\nso chan co trong mang la : %d", countEven(arr,n));
	printf("\nso le co trong mang la : %d\n", countOdd(arr,n));
	int x;
	printf(" so ban can tim : ");
	scanf("%d",&x);
	int pos = getFirtpos(arr,n ,x);
	if(pos >= 0){
		printf(" vi tri dau tien thay so %d la %d\n",x,pos);
	}
	else{
		printf(" deo tim thay!! ");
	}
	getAllpost(arr,n,x);
	return 0;
}