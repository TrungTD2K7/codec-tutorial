#include <stdio.h>

int main(){
	int n;
	printf(" nhap giai thuong : ");
	scanf("%d",&n);
	switch (n){
		case 1:
			printf(" ban da nhan duoc 1 trieu dong ");
			break;
		case 2:
			printf(" ban da nhan duoc 500 nghin dong ");
			break;
		case 3:
			printf(" ban da nhan duoc 100 nghin dong ");
			break;
		case 4:
			printf(" ban da nhan duoc 10 nghin dong ");
			break;
		default:
			printf("chuc ban may man lan sau ");
			break;
	}
	return 0;
}
