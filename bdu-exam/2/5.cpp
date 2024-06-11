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

    double max;

    if (distanceA > distanceB and distanceA > distanceC) max = distanceA;
    if (distanceB > distanceA and distanceB > distanceC) max = distanceB;
    if (distanceC > distanceA and distanceC > distanceB) max = distanceC;

    std::cout << "Maximal distance: " << max << '\n';

    return 0;
}
