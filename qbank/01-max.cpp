// Write a C++ Program to find the maximum of two numbers using if-else statement.
#include <iostream>

int main() {
    int a, b;
    std::cout << "Enter The First Number: ";
    std::cin >> a;
    std::cout << "Enter The Second Number: ";
    std::cin >> b;

    if(a > b) {
        std::cout << "\nThe First Number (" << a << ") is Greater!";
    } else {
        std::cout << "\nThe Second Number (" << b << ") is Greater!";
    }
}