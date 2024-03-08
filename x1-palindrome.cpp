// Write a C++ Program to check if the number is palindrome.
#include <iostream>

int main() {
    int num, a,b, t=0;
    std::cout << "Enter a Number: ";
    std::cin >> num;
    a = num;
    while(a != 0) {
        b = a%10;
        t = t*10+b;
        a = a/10;
    }
    if(num == t) std::cout << "The number " << num << " is a palindrome!";
    else std::cout << "The number " << num << " is not a palindrome!";
}