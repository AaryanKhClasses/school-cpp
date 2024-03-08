// Write a C++ Program to swap two integers using a function.
#include <iostream>

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;
    std::cout << "Enter First Number, A = ";
    std::cin >> a;
    std::cout << "Enter Second Number, B = ";
    std::cin >> b;
    swap(a, b);
    std::cout << "After Swapping, A = " << a << ", B = " << b;
}