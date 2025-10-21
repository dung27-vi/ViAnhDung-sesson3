#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double a, b, S;
    std::cout << "Nhap a: ";
    std::cin >> a;
    std::cout << "Nhap b: ";
    std::cin >> b;

    S = (sqrt(pow(a, 2) + pow(b, 2)) / (a + b)) + ((sqrt(a) + sqrt(b)) / (a * b));

    std::cout << "Output: S = " << std::fixed << std::setprecision(2) << S << std::endl;
    return 0;
}
