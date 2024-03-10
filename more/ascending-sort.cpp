// Write a C++ Program to read n numbers and sort them in ascending order
#include <iostream>

int main() {
    int a[100], n, temp = 0;
    std::cout << "How many numbers to sort: ";
    std::cin >> n;
    std::cout << "Enter the numbers:\n";
    for(int i=0; i<n; i++) {
        std::cin >> a[i];
    }
    std::cout << "Entered Numbers are: ";
    for(int i=0; i<n; i++) {
        std::cout << a[i] << "\t";
    }

    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i; j++) {
            if(a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    std::cout << "\nSorted Numbers are: ";
    for(int i=0; i<n; i++) {
        std::cout << a[i] << "\t";
    }
}