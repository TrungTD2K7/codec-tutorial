#include <stdio.h>

int main() {
    int i, n;
    scanf("%d", &n);

    int sum = 0;
    for (i = 0; i < n; i++) {
        sum = sum + i;
    }
    printf("%d\n", sum);

    sum = 0;   
    for (i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sum = sum + i;
        }
    }
    printf("%d\n", sum);

    sum = 0;   
    for (i = 0; i < n; i++) {
        if (i % 2 != 0) {
            sum = sum + i;
        }
    }
    printf("%d\n", sum);

    return 0;
}