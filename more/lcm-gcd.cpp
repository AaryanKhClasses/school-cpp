// Write a C++ Program to find the LCM and GCD of two numbers using class.
#include <iostream>

class math {
    private:
    int a,b,c,lcm,gcd;

    public:
    void get() {
        std::cout << "Enter two numbers:\n";
        std::cin >> a >> b;
        c = a*b;
    }

    void calc() {
        while(a!=b) {
            if(a>b) a = a-b;
            if(b>a) b = b-a;
        }
        lcm = c/a;
        gcd = a;
    }

    void display() {
        std::cout << "The LCM of the two numbers is: " << lcm;
        std::cout << "\nThe GCD of the two numbers is: " << gcd;
    }
};

int main() {
    math m;
    m.get();
    m.calc();
    m.display();
}