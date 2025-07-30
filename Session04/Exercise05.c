#include <stdio.h>
int main() {
    int a,b,c;
    printf("Nhap so nguyen a: ");
    scanf("%d",&a);
    printf("Nhap so nguyen b: ");
    scanf("%d",&b);
    printf("Nhap so nguyen c: ");
    scanf("%d",&c);

    if (a < c && c < b ) {
        printf("So %d nam giua khoang %d-%d" , c , a , b);
    } else if (b < c && c < a) {
        printf("So %d nam giua khoang %d-%d" , c , b , a);
    }else {
        printf("So %d khong nam giua khoang %d-%d" , c , a , b);
    }

    return 0;
}