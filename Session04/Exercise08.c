#include <stdio.h>
int main() {
    float a, b, c;
    printf("Nhap 3 canh a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a) {
        printf("Day la mot tam giac hop le.\n");
        } else {
            printf("Day khong phai la tam giac.\n");
        }

    return 0;
}
