#include <stdio.h>

int main() {
    float thuNhap, thue;
    printf("Nhap muc thu nhap 1 thang (trieu dong): ");
    scanf("%f", &thuNhap);

    if (thuNhap <= 5) {
        thue = thuNhap * 0.05;
    } else if (thuNhap <= 10) {
        thue = thuNhap * 0.10;
    } else {
        thue = thuNhap * 0.15;
    }

    printf("So tien thue thu nhap phai dong la: %.2f trieu dong\n", thue);

    return 0;
}
