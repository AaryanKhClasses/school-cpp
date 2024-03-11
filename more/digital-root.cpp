// Write a C++ Program to find the digital root of a given number.
// HINT: Digital Root is the sum of all digits of a number.
#include <iostream>

int main() {
    int n, x, res=0;
    std::cout << "Enter a number: ";
    std::cin >> n;
    x = n;
    while(x!=0) {
        res = res + (x%10);
        x = x/10;
    }
    std::cout << "The digital root of " << n << " is " << res;
}