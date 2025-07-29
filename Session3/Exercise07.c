#include <stdio.h>

int main() {
    int n;
    printf("Nhap so nguyen co 4 chu so: ");
    scanf("%d", &n);


    int hangNghin = n / 1000;
    int hangTram = (n % 1000) / 100;
    int hangChuc = (n % 100) / 10;
    int hangDonVi = n % 10;

    int tong = hangNghin + hangTram + hangChuc + hangDonVi;

    printf("Tong cac chu so cua %d la: %d", n, tong);
    return 0;
}