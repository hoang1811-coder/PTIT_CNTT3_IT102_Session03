#include <stdio.h>
int main() {
    int n;
    printf("Hay nhap mot so nguyen duong (1-10): ");
    scanf("%d", &n);
    if (n < 1 || n > 10) {
        printf("Khong hop le.\n ");
    }else {
        printf("Bang cuu chuong cua %d la: ", n);
        for (int i = 1; i <= 10; i++) {
            printf("%d * %d = %d  \n", n, i, n * i);
        }
    }
    return 0;
}