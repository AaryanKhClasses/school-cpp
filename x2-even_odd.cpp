// Write a C++ Program to check if a given number is even or odd.
#include <iostream>

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if(num % 2 == 0) std::cout << "The Number is Even!";
    else std::cout << "The Number is Odd!";
}