#include <stdio.h>

int main() {
    int a, b;
    int tong, hieu;
    float tich, thuong;
    int choice;

    do {
        printf("CALCULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("\nLua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap vao hai so bat ky: ");
                scanf("%d ,%d", &a, &b);
                tong = a + b;
                printf("Tong 2 so la: %d\n", tong);
                break;
            case 2:
                printf("Nhap vao hai so bat ky: ");
                scanf("%d ,%d", &a, &b);
                hieu = a - b;
                printf("Hieu 2 so la: %d\n", hieu);
                break;
            case 3:
                printf("Nhap vao hai so bat ky: ");
                scanf("%d ,%d", &a, &b);
                tich = a * b;
                printf("Tich 2 so la: %.2f\n", tich);
                break;
            case 4:
                printf("Nhap vao hai so bat ky: ");
                scanf("%d ,%d", &a, &b);
                if (b == 0) {
                    printf("Loi: Khong the chia cho 0.\n");
                } else {
                    thuong = (float)a / b;
                    printf("Thuong 2 so la: %.2f\n", thuong);
                }
                break;
            case 5:
                printf("Ban da chon thoat. Ket thuc chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le! Vui long chon tu 1 den 5.\n");
        }
    } while (choice != 5);

    return 0;
}
