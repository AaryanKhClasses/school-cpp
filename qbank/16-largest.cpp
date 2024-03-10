// Write a C++ Program to find the largest number from an array of given numbers.
#include <iostream>

int main() {
    int a[100], n, ans;
    std::cout << "How many numbers to input: ";
    std::cin >> n;
    for(int i=0; i<n; i++) {
        std::cin >> a[i];
    }
    std::cout << "Inputted Numbers: \n";
    for(int i=0; i<n; i++) {
        std::cout << a[i] << "\t";
    }
    ans = a[0];
    for(int i=0; i<n; i++) {
        if(ans < a[i]) ans = a[i];
    }
    std::cout << "\nThe largest number is: " << ans;
}