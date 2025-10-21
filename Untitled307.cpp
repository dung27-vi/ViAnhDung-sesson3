#include <stdio.h>

int main() {
    int n, sum = 0;
    
    printf("Nhap vao mot so nguyen co 4 chu so: ");
    scanf("%d", &n);
    
    int temp = n;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    
    printf("Tong cac chu so cua %d la: %d\n", n, sum);
    
    return 0;
}
