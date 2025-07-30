#include <stdio.h>
int main() {
    int year;
    printf("Hay nhap so nam ban muon kiem tra la: ");
    scanf("%d", &year);

    if((year % 4 ==0 && year % 100 != 0) || year % 400 == 0) {
        printf("Nam %d la nam nhuan", year);
    }else {
        printf("Nam %d khong phai la nam nhuan", year);
    }

    return 0;
}