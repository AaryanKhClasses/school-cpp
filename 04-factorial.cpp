// Write a C++ Program to find the factorial of a given number using a for loop;
#include <iostream>

int main() {
    int m, n;
    std::cout << "Enter the number: ";
    std::cin >> n;
    m = n;
    for(int i=1; i<m; i++) {
        n = n*i;
    }
    std::cout << m << "! = " << n;
}