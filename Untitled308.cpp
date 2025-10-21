#include <stdio.h>

int main() {
    int n, reversedN = 0, remainder;
    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;
        reversedN = reversedN * 10 + remainder;
        n /= 10;
    }

    printf("So nghich dao la: %d", reversedN);
    return 0;
}
