// Write a C++ Program to find if a given year is leap or not using if-else statement.
#include <iostream>

int main() {
    int yr;
    std::cout << "Enter Year: ";
    std::cin >> yr;

    if(yr%4 == 0) std::cout << "The Year " << yr << " is a Leap Year!";
    else std::cout << "The Year " << yr << " is not a Leap Year!";
}