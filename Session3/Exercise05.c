#include<stdio.h>
int main() {
    int Number1, Number2, Number3;
    printf("Nhap so thu nhat :");
    scanf("%d", &Number1);
    printf("Nhap so thu hai : ");
    scanf("%d", &Number2);
    printf("Nhap so thu ba : ");
    scanf("%d", &Number3);

    int Number;
    if ((Number1 + Number2) / 2 == Number3){
        printf("So thu 3 nam trong giua so 1 va 2");
    }else {
        printf("So thu 3 khong nam trong giua so 1 va 2");
    }

    return 0;
}
