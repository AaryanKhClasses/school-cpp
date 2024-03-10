// Write a C++ Program to count the number of words in a line.
#include <iostream>
#include <string.h>

int main() {
    char line[100];
    int count=0;
    std::cout << "Enter a line: ";
    std::cin.getline(line, 100);
    int len = strlen(line);
    for(int i=0; i<len; i++) {
        if(line[i] != ' ') count++;
    }
    std::cout << "Number of words are: " << count;
}