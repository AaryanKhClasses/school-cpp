// Write a C++ Program to read an array of numbers and print its sum.
#include <iostream>

int main() {
    int a[100], n, sum = 0;
    std::cout << "Enter the number of  elements in the array: ";
    std::cin >> n;
    std::cout << "Enter The Numbers:\n";
    for(int i=0; i<n; i++) {
        std::cin >> a[i];
    }
    std::cout << "The Entered Numbers Are: \n";
    for(int i=0; i<n; i++) {
        std::cout << "\t" << a[i];
        sum = sum + a[i];
    }
    std::cout << "\nThe Sum of all Numbers is: " << sum;
}