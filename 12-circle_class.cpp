// Write a C++ Program with classes to find the area and circumference of a circle of given radius.
#include <iostream>

class circle {
    float r, pi=3.14;

    public:
    circle() {
        std::cout << "Enter the Radius of the Circle: ";
        std::cin >> r;
    }

    void area(void) {
        std::cout << "\nArea of the Circle is: " << pi*r*r;
    }

    void circumference(void) {
        std::cout << "\nCircumference of the Circle is: " << 2*pi*r;
    }
};

int main() {
    circle c;
    c.area();
    c.circumference();
}