// Write a C++ Program to find if a number is prime or not.
#include <iostream>

int main() {
    int n, c=0;
    std::cout << "Enter a number: ";
    std::cin >> n;
    for(int i=2; i<n; i++) {
        if(n%i==0) c=1;
    }
    if(c==0) std::cout << "The given number is prime!";
    else std::cout << "The given number is not prime!";
}