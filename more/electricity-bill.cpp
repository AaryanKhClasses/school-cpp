// Write a C++ Program to calculate electricity bill using class, containing the following methods:
// getdata(): get meter number, previous units, current units
// process(): to check if current units are greater than previous units. If not, then display appropriate error message
// calculate(): calculate the bill
// display(): display bill and other details
// Use the following conversion rate:
// Units   |     Rates
// 0-50      Rs 2 per unit
// 50-200    Rs 3.5 per unit
// 200-500   Rs 4.5 per unit
// 500+      Rs 5 per unit

#include <iostream>
#include <windows.h>

class electricity {
    private:
    int mn, cu, pu, n;
    float bill;

    public:
    electricity() { bill = 0; }

    void getdata() {
        std::cout << "Enter the meter number: ";
        std::cin >> mn;
        std::cout << "Enter the previous units: ";
        std::cin >> pu;
        std::cout << "Enter the current units: ";
        std::cin >> cu;
    }

    void process() {
        if(cu < pu || cu < 0 || pu < 0) {
            std::cout << "\nIncorrect Data Entered..\n";
            getdata();
        } else n = cu - pu;
    }

    void calculate() {
        int dn = n;
        if(dn <= 50) {
            bill = bill + (dn * 2);
        } else {
            bill = bill + (50 * 2);
            if(dn <= 200) {
                dn = dn - 50;
                bill = bill + (dn * 3.5);
            } else {
                bill = bill + (150 * 3.5);
                if(dn <=500) {
                    dn = dn - 200;
                    bill = bill + (dn*4.5);
                } else {
                    bill = bill + (300 * 4.5);
                    dn = dn - 500;
                    bill = bill + (dn * 5);
                }
            }
        }
    }

    void display() {
        std::cout << "\nMeter Number: " << mn;
        std::cout << "\nPrevious Units: " << pu;
        std::cout << "\nCurrent Units: " << cu;
        std::cout << "\nNumber of Units Used: " << n;
        std::cout << "\nBill: " << bill << "Rs.";
    }

    ~electricity() {}
};

int main() {
    electricity e;
    e.getdata();
    e.process();
    e.calculate();
    e.display();
}