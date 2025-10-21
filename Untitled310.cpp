#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    double S;

    printf("Nhap vao so nguyen duong a: ");
    scanf("%d", &a);
    printf("Nhap vao so nguyen duong b: ");
    scanf("%d", &b);

    S = sqrt(a + sqrt(b + 1.0)) + sqrt(b + sqrt(pow(a, 2) + pow(b, 2)));

    printf("Gia tri cua bieu thuc S la: %.2f\n", S);

    return 0;
}
