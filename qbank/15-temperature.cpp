// Write a C++ Program to convert Farenheit to Celsius.
// HINT: C = 5/9(F - 32)

#include <iostream>

class temp {
    private:
    float f, c;

    public:
    void convert() {
        std::cout << "Enter Temperature in Farenheit: ";
        std::cin >> f;
        c = 5/9*(f-32);
        std::cout << "Temperature in Celsius is: " << c;
    }
};

int main() {
    temp t;
    t.convert();
}