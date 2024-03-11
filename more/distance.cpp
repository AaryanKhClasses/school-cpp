// Write a C++ Program to find the distance of a point (x,y) from the origin (0,0);
#include <iostream>
#include <math.h>

class point {
    private:
    float x, y, dist;

    public:
    void get_coords() {
        std::cout << "Enter the x-coordinate of the point: ";
        std::cin >> x;
        std::cout << "Enter the y-coordinate of the point: ";
        std::cin >> y;
    }

    void distance() {
        dist = sqrt((x * x) + (y * y));
        std::cout << "The distance of the point (" << x << ", " << y << ") from the origin is: " << dist;
    }
};

int main() {
    point p;
    p.get_coords();
    p.distance();
}