// Write a C++ Program to find the largest of three numbers.
#include <iostream>

int main() {
    int a,b,c;
    std::cout << "Enter Three Numbers:\n";
    std::cin >> a >> b >> c;
    if(a < b) {
        if(b < c) std::cout << c << " is the greatest!";
        else std::cout << b << " is the greatest!";
    } else if(a < c) std::cout << c << " is the greatest!";
    else std::cout << a << " is the greatest!";
}