#include<stdio.h>
int main() {
    int oldNumber, newNumber;
    printf("Nhap chi so dien cu: ");
    scanf("%d", &oldNumber);
    printf("Nhap chi so dien moi: ");
    scanf("%d", &newNumber);

    int electricityNumber = newNumber - oldNumber;

    if(0 <= electricityNumber && electricityNumber < 50) {
        int money = electricityNumber * 10000;
        printf("Gia Dien la %d VND/kWh" , money);
    }else if(50 <= electricityNumber && electricityNumber < 100) {
        int money = electricityNumber * 15000;
        printf("Gia Dien la %d VND/kWh", money);
    }else if(100 <= electricityNumber && electricityNumber < 150) {
        int money = electricityNumber * 20000;
        printf("Gia Dien la %d VND/kWh", money);
    }else if(150 <= electricityNumber && electricityNumber < 200) {
        int money = electricityNumber * 25000;
        printf("Gia Dien la %d VND/kWh", money);
    }else {
        int money = electricityNumber * 30000;
        printf("Gia Dien la %d VND/kWh", money);
    }
    return 0;

}