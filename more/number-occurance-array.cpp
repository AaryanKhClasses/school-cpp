// Write a C++ Program to get an array of 10 numbers and another number "n" and return how many times "n" occur in the array
#include <iostream>

class search {
    private:
    int arr[10], n, count=0;

    public:
    void get() {
        std::cout << "Enter a list of 10 numbers:\n";
        for(int i=0; i<10; i++) {
            std::cin >> arr[i];
        }
        std::cout << "Entered numbers are: ";
        for(int i=0; i<10; i++) {
            std::cout << arr[i] << "\t";
        }

        std::cout << "\nEnter the number to find: ";
        std::cin >> n;
    }

    void find() {
        for(int i=0; i<10; i++) {
            if(arr[i] == n) count++;
        }
    }

    void display() {
        std::cout << "The specified number " << n << " appeared " << count << " times!";
    }
};

int main() {
    search s;
    s.get();
    s.find();
    s.display();
}