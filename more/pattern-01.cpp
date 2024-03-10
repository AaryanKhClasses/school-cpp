// Write a C++ Program to print the pattern:
// 1
// 2   2
// 3   3   3
// 4   4   4   4
// ... n times...
#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number of iterations: ";
    std::cin >> n;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            std::cout << i <<"\t";
        }
        std::cout << "\n";
    }
}