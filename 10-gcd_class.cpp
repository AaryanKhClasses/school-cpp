// Write a C++ program to find the GCD of two numbers using class.
#include <iostream>

class gcd {
    public:
    gcd(int a, int b) {
        while (a!=b) {
            if(a>b) a = a-b;
            if(b>a) b = b-a;
        }

        std::cout << "\n GCD of the two numbers is: " << a;
    }
};

int main() {
    int a, b;
    std::cout << "Enter the First Number: ";
    std::cin >> a;
    std::cout << "Enter the Second Number: ";
    std::cin >> b;
    gcd gcd(a,b);
}