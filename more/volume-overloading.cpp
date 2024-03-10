// Write a C++ Program to find the volume of cube, cylinder, rectangular box depending upon choice using function overloading.
#include <iostream>

float volume(float s) {
    return s * s * s;
}

float volume(float r, float h) {
    return 3.14 *r * r * h;
}

float volume(float l, float b, float h) {
    return l * b * h;
}

int main() {
    float a,b,c,ans;
    int ch;
    std::cout << "[1]: Volume of Cube\n[2]: Volume of Cylinder\n[3]: Volume of Rectangular Box\nEnter your choice: ";
    std::cin >> ch;
    switch(ch) {
        case 1:
            std::cout << "Enter side length of cube: ";
            std::cin >> a;
            std::cout << "The volume of the cube is: " << volume(a);
            break;
        case 2:
            std::cout << "Enter radius of cylinder: ";
            std::cin >> a;
            std::cout << "Enter height of cylinder: ";
            std::cin >> b;
            std::cout << "The volume of the cylinder is: " << volume(a,b);
            break;
        case 3:
            std::cout << "Enter length of box: ";
            std::cin >> a;
            std::cout << "Enter breadth of box: ";
            std::cin >> b;
            std::cout << "Enter height of box: ";
            std::cin >> c;
            std::cout << "The volume of the box is: " << volume(a,b,c);
            break;
        default:
            std::cout << "Invalid choice\n";
            break;
    }
}