#include <stdio.h>
int main() {
    int a, b;
    printf("Nhap so nguyen a: ");
    scanf("%d", &a);
    printf("Nhap so nguyen b: ");
    scanf("%d", &b);

    if (a > b) {
        printf("So lon hon la: %d\n", a);
    } else if (b > a) {
        printf("So lon hon la: %d\n", b);
    }
    return 0;
}

