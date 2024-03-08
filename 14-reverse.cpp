// Write a C++ Program to reverse a given string.
#include <iostream>
#include <string.h>

int main() {
    char str[100];
    std::cout << "Enter a string: ";
    std::cin >> str;
    int len = strlen(str);
    std::cout << "\nThe Inserted string is: " << str;

    int mid = len / 2;
    for(int i=1; i<=mid; i++) {
        char temp = str[i];
        str[i] = str[len];
        str[len] = temp;
        len--;
    }
    std::cout << "\nThe Reversed string is: " << str;
}