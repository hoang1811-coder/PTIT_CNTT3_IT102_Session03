#include <stdio.h>


struct SinhVien {
    int STT;
    char HoTen[50];
    int Tuoi;
    char SoDT[15];
    char Email[30];
};

void inTieuDe() {
    printf("\nDANH SACH SINH VIEN\n");
    printf("|-----|-----------------|------|---------------|--------------------------|\n");
    printf("| STT | Ho va ten       | Tuoi | So dien thoai | Email                    |\n");
    printf("|-----|-----------------|------|---------------|--------------------------|\n");
}

void inSinhVien(struct SinhVien sv) {
    printf("| %-3d | %-15s | %4d | %-13s | %-24s |\n",
           sv.STT, sv.HoTen, sv.Tuoi, sv.SoDT, sv.Email);
}

int main() {
    struct SinhVien danhSach[] = {
        {1, "Nguyen Van A", 20, "0904488481", "anv@rikkeiacademy.com"},
        {2, "Nguyen Van B", 21, "0904488482", "bnv@rikkeiacademy.com"},
        {3, "Nguyen Van C", 18, "0904488483", "cnv@rikkeiacademy.com"},
        {4, "Nguyen Van D", 19, "0904488484", "dnv@rikkeiacademy.com"},
        {5, "Nguyen Van E", 22, "0904488485", "env@rikkeiacademy.com"},
        {6, "Nguyen Van F", 21, "0904488486", "fnv@rikkeiacademy.com"},
        {7, "Nguyen Van G", 23, "0904488487", "gnv@rikkeiacademy.com"},
        {8, "Nguyen Van H", 19, "0904488488", "hnv@rikkeiacademy.com"},
        {9, "Nguyen Van I", 18, "0904488489", "inv@rikkeiacademy.com"},
        {10, "Nguyen Van K", 21, "0904488480", "knv@rikkeiacademy.com"}
    };

    int soLuong = sizeof(danhSach)/sizeof(danhSach[0]);

    inTieuDe();

    for(int i = 0; i < soLuong; i++) {
        inSinhVien(danhSach[i]);
    }
    printf("|-----|-----------------|------|---------------|--------------------------|\n");

    return 0;
}