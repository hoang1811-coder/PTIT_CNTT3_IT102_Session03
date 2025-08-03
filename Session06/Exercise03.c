#include <stdio.h>
int main() {
    int n;
    int sum = 0;
    printf("Hay nhap mot so nguyen duong: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    printf("Tong = %d\n", sum);


    return 0;
}