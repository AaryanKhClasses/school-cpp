// Write a C++ Program to count the number of words in a line of text.
#include <iostream>
#include <string.h>

int main() {
    char str[100];
    std::cout << "Enter a string: ";
    std::cin.getline(str, 100);
    int len = strlen(str);
    int count = 0;
    for(int i=0; i<len; i++) {
        if(str[i] != ' ') count++;
    }
    std::cout << "Number of words in above string is: " << count;
}