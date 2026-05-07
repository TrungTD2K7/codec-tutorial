#include <stdio.h>

int main() {

    char name[20];

    printf("nhap ten cua ban:");
    scanf("%s", name);

    printf("Hello %s\n", name);

    int tuoi;

    printf("nhap tuoi cua ban:\n");
    scanf("%d", &tuoi);

    printf("You are %d years old", tuoi);

    return 0;
}