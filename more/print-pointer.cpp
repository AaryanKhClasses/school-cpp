// Write a C++ Program to print a set of numbers using pointers.
#include <iostream>

int main() {
    int n, a[100], *p;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    p = &a[0];
    std::cout << "\nThe Inserted numbers are: ";
    for(int i=0; i<n; i++) {
        std::cout << *p << "\t";
        p++;
    }
}