#include <stdio.h>
#include <math.h>

int main() {
    float r, chuvi, dientich;
    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &r);
    chuvi = 2 * M_PI * r;
    dientich = M_PI * r * r;
    printf("Chu vi = %.2f\n", chuvi);
    printf("Dien tich = %.2f\n", dientich);
    return 0;
}
