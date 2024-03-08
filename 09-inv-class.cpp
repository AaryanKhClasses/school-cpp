// Write a program in C++ to implement "inventory" class to calculate total price of number of items purchased.
#include <iostream>

class inventory {
    private:
    int count_a, count_b, price_a = 100, price_b = 200;

    public:
    void item_a(void) {
        std::cout << "Number of Item A to Purchase: ";
        std::cin >> count_a;
    }

    void item_b(void) {
        std::cout << "Number of Item B to Purchase: ";
        std::cin >> count_b;
    }

    void total(void) {
        int sum = (count_a * price_a) + (count_b * price_b);
        std::cout << "Total Price is $" << sum;
    }

    inventory() {
        item_a();
        item_b();
        total();
    }
};

int main() {
    inventory inv;
}