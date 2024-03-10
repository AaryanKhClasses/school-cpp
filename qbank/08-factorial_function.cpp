// Write a C++ Program to find the factorial of a given number using a function.
#include <iostream>

void factorial(int n, int &res) {
    for(int i=1; i<=n; i++) {
        res = res * i;
    }
}

int main() {
    int num, res=1;
    std::cout << "Enter a Natural Number: ";
    std::cin >> num;
    factorial(num, res);
    std::cout << num << "!= " << res;
}