#include <stdio.h>

int main() {
    int n;
    double A;

    // Y�u c?u ng�?i d�ng nh?p n v� ki?m tra �i?u ki?n n > 1
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
