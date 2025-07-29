#include<stdio.h>
int main() {
    int electricityBill;
    printf("Nhap so dien :");
    scanf("%d", &electricityBill);
    if (0 <= electricityBill && electricityBill < 50) {
        int Tien = electricityBill * 10.000;
        printf("Tien dien phai tra la : %d.000 VND", Tien);
    }else if (50 <= electricityBill && electricityBill < 100) {
        int Tien = electricityBill * 15.000;
        printf("Tien dien phai tra la : %d.000 VND", Tien);
    }else if (100 <= electricityBill && electricityBill < 150) {
        int Tien = electricityBill * 20.000;
        printf("Tien dien phai tra la: %d.000 VND", Tien);
    }else if (150 <= electricityBill && electricityBill < 200) {
        int Tien = electricityBill * 25.000;
        printf("Tien dien phai tra la: %d.000 VND", Tien);
    }else {
        int Tien = electricityBill * 30.000;
        printf("Tien dien phai tra la: %d.000 VND", Tien);
    }
    return 0;
}
