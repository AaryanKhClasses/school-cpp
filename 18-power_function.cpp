// Write a C++ Program to find the exponent of a given number using function.
#include <iostream>

void power(int base, int exp) {
    int res=base;
    for(int i=1; i<exp; i++) {
        res = res * base;
    }
    std::cout << base << "^" << exp << " = " << res;
}

int main() {
    int base, exp;
    std::cout << "Enter the base number: ";
    std::cin >> base;
    std::cout << "Enter the exponent: ";
    std::cin >> exp;
    power(base, exp);
}