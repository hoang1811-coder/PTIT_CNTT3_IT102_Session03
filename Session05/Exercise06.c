#include <stdio.h>

int main() {
    float a, b, ketQua;
    char toanTu;
    printf("Nhap so thu nhat (a): ");
    scanf("%f", &a);
    printf("Nhap so thu hai (b): ");
    scanf("%f", &b);
    printf("Nhap toan tu (+, -, *, /): ");
    scanf(" %c", &toanTu);

    // Thực hiện phép tính
    switch (toanTu) {
        case '+':
            ketQua = a + b;
            printf("Ket qua: %.2f\n", ketQua);
            break;
        case '-':
            ketQua = a - b;
            printf("Ket qua: %.2f\n", ketQua);
            break;
        case '*':
            ketQua = a * b;
            printf("Ket qua: %.2f\n", ketQua);
            break;
        case '/':
            if (b == 0) {
                printf("Loi: Khong the chia cho 0.\n");
            } else {
                ketQua = a / b;
                printf("Ket qua: %.2f\n", ketQua);
            }
            break;
        default:
            printf("Loi: Toan tu khong hop le.\n");
    }

    return 0;
}
