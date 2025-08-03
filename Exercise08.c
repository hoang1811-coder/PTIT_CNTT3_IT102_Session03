#include <stdio.h>

int main() {
    int Number;
    printf("Nhap so nguyen co 4 chu so:");
    scanf("%d", &Number);
    int unit = Number % 10;
    int dozen = (Number / 10) % 10;
    int hundred = (Number / 100) % 10;
    int thousand = (Number / 1000) % 10;
    printf("%d \n", unit);
    printf("%d \n", dozen);
    printf("%d \n", hundred);
    printf("%d \n", thousand);

    int reves = (unit * 1000) + (dozen * 100) + (hundred * 10) + thousand;
    printf("So nghich dao la : %d", reves);

    return 0;
}