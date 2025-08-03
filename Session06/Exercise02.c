#include <stdio.h>
int main() {
    int result =18;
    int number;
    while (result != number) {
        printf("Please enter a number: ");
        scanf("%d", &number);
        if (number == 18) {
            printf("Bingo\n");
            break;
        }
    }
    return 0;
}