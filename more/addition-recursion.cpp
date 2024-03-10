// Write a C++ Program to add the first n numbers using recursion function.
#include <iostream>

int add(int n) {
    int sum=0;
    if(n!=0) {
        sum = n + add(n-1);
    }
    return sum;
}

int main() {
    int n, sum;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    sum = add(n);
    std::cout << "The sum of first " << n << " natural numbers is " << sum;
}