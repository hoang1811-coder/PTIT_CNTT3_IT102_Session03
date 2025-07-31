#include <stdio.h>

int main() {
    int tuoi;
    float giaVe = 10000;
    float giaPhaiTra;

    printf("Nhap tuoi hanh khach: ");
    scanf("%d", &tuoi);

    if (tuoi < 6) {
        giaPhaiTra = 0;
    } else if (tuoi <= 18) {
        giaPhaiTra = giaVe * 0.5;
    } else if (tuoi <= 60) {
        giaPhaiTra = giaVe;
    } else {
        giaPhaiTra = giaVe * 0.7;
    }

    printf("So tien ve xe buyt phai tra la: %.0f VND\n", giaPhaiTra);

    return 0;
}
