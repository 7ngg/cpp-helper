#include <cmath>
#include <iostream>

class Point {
private:
    double x;
    double y;

public:
    Point(double valueX, double valueY) {
        x = valueX;
        y = valueY;
    }

    friend double get_distance(Point p);
};

double get_distance(Point p) {
    double result = sqrt(p.x * p.x + p.y * p.y);

    return result;
}

int main() {
    Point p(0, 0);
    double distance = get_distance(p);

    std::cout << "Distance: " << distance;

    return 0;
}
