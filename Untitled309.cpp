#include <stdio.h>

int main() {
    int n;
    double A;

    // Yêu c?u ngý?i dùng nh?p n và ki?m tra ði?u ki?n n > 1
    do {
        printf("Nhap mot so nguyen duong n > 1: ");
        scanf("%d", &n);
    } while (n <= 1);

    // Tinh gia tri cua bieu thuc A
    A = 3.0 / ((double)(n - 1) * (n + 2));

    // In ket qua voi do chinh xac cao
    printf("Gia tri cua bieu thuc A la: %.5f\n", A);

    return 0;
}
