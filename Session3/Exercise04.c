#include <stdio.h>

int main() {
    float diemvan;
    float diemtoan;
    float diemtienganh;
    printf("moi ban nhap diem van:");
    scanf("%f", &diemvan);
    printf("moi ban nhap diem toan:");
    scanf("%f", &diemtoan);
    printf("moi ban nhap diemtienganh:");
    scanf("%f", &diemtienganh);
    float diemtong3mon = diemvan+diemtoan+diemtienganh;
    float diemtrungbinh = diemtong3mon/3;
    printf("diem trung binh 3 mon la: %.2f", diemtrungbinh);
    return 0;
}