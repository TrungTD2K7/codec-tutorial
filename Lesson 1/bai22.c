#include <stdio.h>

int main() {
	int sel;
	do {
		printf("\n1.Nhap");
		printf("\n2.HienThi");
		printf("\n3.Sua");
		printf("\n4.Xoa");
		printf("\n5.SapXep");
		printf("\n0.Thoat");
		printf("\nNhap lua chon cua ban :");
		scanf("%d", &sel);
		switch(sel) {
			case 1:
				printf("chuong trinh 1 chay");
				break;
			case 2:
				printf("chuong trinh 2 chay");
				break;
			case 3:
				printf("chuong trinh 3 chay");
				break;
			case 4:
				printf("chuong trinh 4 chay");
				break;
			case 5:
				printf("chuong trinh 5 chay");
				break;
			case 0:
				printf("Bye");
				break;
			default :
				printf(" Hay chon lai ");
		}
	} while (sel != 0);
}
