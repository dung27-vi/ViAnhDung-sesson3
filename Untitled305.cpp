#include <stdio.h>

struct SinhVien {
    char hoVaTen[50];
    int tuoi;
    char soDienThoai[15];
    char email[50];
};

int main() {
    struct SinhVien danhSachSV[10] = {
        {"Nguyen Van A", 20, "0904488481", "anv@rikkeiacademy.com"},
        {"Nguyen Van B", 21, "0904488482", "bnv@rikkeiacademy.com"},
        {"Nguyen Van C", 18, "0904488483", "cnv@rikkeiacademy.com"},
        {"Nguyen Van D", 19, "0904488484", "dnv@rikkeiacademy.com"},
        {"Nguyen Van E", 22, "0904488485", "env@rikkeiacademy.com"},
        {"Nguyen Van F", 21, "0904488486", "fnv@rikkeiacademy.com"},
        {"Nguyen Van G", 23, "0904488487", "gnv@rikkeiacademy.com"},
        {"Nguyen Van H", 19, "0904488488", "hnv@rikkeiacademy.com"},
        {"Nguyen Van I", 18, "0904488489", "inv@rikkeiacademy.com"},
        {"Nguyen Van K", 21, "0904488480", "knv@rikkeiacademy.com"}
    };

    printf("+-----+--------------------+------+---------------+--------------------------+\n");
    printf("| STT | Ho va ten          | Tuoi | So dien thoai | email                    |\n");
    printf("+-----+--------------------+------+---------------+--------------------------+\n");

    for (int i = 0; i < 10; i++) {
        printf("| %-3d | %-18s | %-4d | %-13s | %-24s |\n", i + 1, danhSachSV[i].hoVaTen, danhSachSV[i].tuoi, danhSachSV[i].soDienThoai, danhSachSV[i].email);
    }
    
    printf("+-----+--------------------+------+---------------+--------------------------+\n");
}
