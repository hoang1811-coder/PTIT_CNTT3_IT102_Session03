#include <stdio.h>
int main() {
    int a, b;

    printf("Nhap hai so nguyen duong: ");
    scanf("%d %d", &a, &b);
    if (a <= 0 || b <= 0) {
        printf("Vui long nhap hai so nguyen duong.\n");
        return 1;
    }

    int i;
    if (a > b)
        i = a;
    else
        i = b;

    while (1) {
        if (i % a == 0 && i % b == 0) {
            printf("Boi chung nho nhat cua %d va %d la: %d\n", a, b, i);
            break;
        }
        i++;
    }
    return 0;
}
