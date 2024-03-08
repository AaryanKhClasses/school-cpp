// Write a C++ Program to find the factorial of a given number using classes.
#include <iostream>

class factorial {
    private:
    int num, ans=1;
    public:
    factorial(int n) {
        num = n;
        for(int i=1; i<=n; i++) {
            ans = ans * i;
        }
    }

    void print(void) {
        std::cout << num << "!= " << ans;
    }
};

int main() {
    int n;
    std::cout << "Enter a Natural Number: ";
    std::cin >> n;
    factorial f(n);
    f.print();
}