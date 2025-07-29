#include <stdio.h>

int main() {
    float doC, doF;
    printf("Nhap nhiet do (do C): ");
    scanf("%f", &doC);
    doF = doC * 9 / 5 + 32;
    printf("Nhiet do tuong ung theo do F la: %.2f�F\n", doF);
    return 0;
}
