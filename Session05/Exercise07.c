#include <stdio.h>
int main() {
    char c;
    printf("Nhap mot ky tu: ");
    scanf(" %c", &c);

    if (c >= 'a' && c <= 'z') {
        printf("Chu hoa tuong ung: %c\n", c - 32);
    } else if (c >= 'A' && c <= 'Z') {
        printf("Chu thuong tuong ung: %c\n", c + 32);
    } else {
        printf("Khong phai chu cai.\n");
    }

    return 0;
}
