#include <stdio.h>

int main() {
    int soM3;
    int tien = 0;
    printf("Nhap so met khoi (m3) nuoc tieu thu trong thang: ");
    scanf("%d", &soM3);

    if (soM3 <= 0) {
        tien = 0;
    } else {
        if (soM3 <= 10) {
            tien = soM3 * 6000;
        } else if (soM3 <= 20) {
            tien = 10 * 6000 + (soM3 - 10) * 7000;
        } else if (soM3 <= 30) {
            tien = 10 * 6000 + 10 * 7000 + (soM3 - 20) * 8500;
        } else {
            tien = 10 * 6000 + 10 * 7000 + 10 * 8500 + (soM3 - 30) * 10000;
        }
    }

    printf("Tien nuoc phai tra: %d VND\n", tien);

    return 0;
}
