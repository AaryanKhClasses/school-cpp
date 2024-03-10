// Write a C++ Program to find factorial of a given number using for loop.
#include <iostream>

int main() {
    int a=0,b=1,t,n;
    std::cout << "Enter the number of terms: ";
    std::cin >> n;
    for(int i=0; i<n; i++) {
        std::cout << a << "\n";
        t = a;
        a = b;
        b = t+b;
    }
}