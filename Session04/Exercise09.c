#include <stdio.h>

int main() {
    int day, month, year;
    int isLeap = 0;
    int isValid = 1;

    printf("Nhap ngay: ");
    scanf("%d", &day);

    printf("Nhap thang: ");
    scanf("%d", &month);

    printf("Nhap nam: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        isLeap = 1;
    }

    if (month < 1 || month > 12) {
        isValid = 0;
    } else {
        if (day < 1) {
            isValid = 0;
        } else if (month == 2) {
            if (isLeap) {
                if (day > 29) isValid = 0;
            } else {
                if (day > 28) isValid = 0;
            }
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            if (day > 30) isValid = 0;
        } else {
            if (day > 31) isValid = 0;
        }
    }

    if (isValid) {
        printf("Ngay %02d/%02d/%04d la ngay hop le.\n", day, month, year);
    } else {
        printf("Ngay %02d/%02d/%04d KHONG hop le.\n", day, month, year);
    }

    return 0;
}
