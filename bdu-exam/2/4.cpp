#include <cmath>
#include <iostream>

class Point {
public:
    double x;
    double y;

    Point(double valueX, double valueY) {
        x = valueX;
        y = valueY;
    }

    double get_distance() {
        double result = sqrt(x*x + y*y);

        return result;
    }
};

int main() {
    Point A(3, 4);
    Point B(5, 12);
    Point C(0, 0);

    double distanceA = A.get_distance();
    double distanceB = B.get_distance();
    double distanceC = C.get_distance();

    double min;

    if (distanceA < distanceB and distanceA < distanceC) min = distanceA;
    if (distanceB < distanceA and distanceB < distanceC) min = distanceB;
    if (distanceC < distanceA and distanceC < distanceB) min = distanceC;

    std::cout << "Minimal distance: " << min << '\n';

    return 0;
}
