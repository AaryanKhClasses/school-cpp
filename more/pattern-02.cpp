// Write a C++ Program to print the pattern:
// 1   0   1   0   1
// 1   0   1   0
// 1   0   1
// 1   0
// 1
#include <iostream>

int main() {
    int n=5;
    for(int i=n;i>0;i--) {
        for(int j=1;j<=i;j++) {
            std::cout << j%2 << "\t";
        }
        std::cout << "\n";
    }
}