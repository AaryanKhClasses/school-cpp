// Write a C++ Program to perform arithmetic operations using switch-case statements.
#include <iostream>

int main() {
    float a,b,ans;
    int c;
    std::cout << "Enter Two Numbers:\n";
    std::cin >> a >> b;
    std::cout << "What operation do you want to perform?\n[1]: Addition\n[2]: Subtraction\n[3]: Multiplication\n[4]: Divison\n";
    std::cin >> c;

    switch(c) {
        case 1:
            ans = a+b;
            std::cout << "\nThe Sum Is: " << ans;
            break;
        case 2:
            ans = a-b;
            std::cout << "\nThe Difference Is: " << ans;
            break;
        case 3:
            ans = a*b;
            std::cout << "\nThe Product Is: " << ans;
            break;
        case 4:
            ans = a/b;
            std::cout << "\nThe Divison Is: " << ans;
            break;
        default:
            std::cout << "\nInvalid Input";
            break;
    }
}