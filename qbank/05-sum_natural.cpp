// Write a C++ Program to find the sum of n-natural numbers using a for loop.
#include <iostream>

int main() {
    int a, n;
    std::cout << "Enter a Natural Number: ";
    std::cin >> n;
    for(int i=0; i<=n; i++) {
        a = a+i;
    }
    std::cout << "The Sum of the First " << n << " Natural Numbers is " << a;
}