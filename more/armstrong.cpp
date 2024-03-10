// Write a C++ Program to find if a number is armstrong or not.
// HINT Armstrong number is a number whose sum of cubes of digits is equal to the number itself.
#include <iostream>

int main() {
    int n, a, b, temp=0;
    std::cout << "Enter a number: ";
    std::cin >> n;
    a = n;
    while(a!=0) {
        b=a%10;
        temp=temp+(b*b*b);
        a=a/10;
    }
    if(n==temp) std::cout << n << " is an armstrong number!";
    else std::cout << n << " is not an armstrong number!";
}