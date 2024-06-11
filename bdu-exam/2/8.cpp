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
};

double get_distance(Point p1, Point p2) {
    double x = p1.x - p2.x;
    double y = p1.y - p2.y;

    return sqrt(x * x + y * y);
}

int main() {
    Point p1(0, 3);
    Point p2(4, 0);

    std::cout << "Distance: " << get_distance(p1, p2);

    return 0;
}
