// Write a C++ Program to find the number of occurance of a letter in a given string
#include <iostream>
#include <string.h>

int main() {
    char n, str[100];
    int len, count=0;
    std::cout << "Enter the letter to be counted: ";
    std::cin >> n;
    std::cout << "Enter the string: ";
    std::cin >> str;
    len = strlen(str);
    for(int i=0; i<=len; i++) {
        if(str[i] == n) count++;
    }
    std::cout << "Number of occurances of the letter \"" << n << "\" is " << count;
}