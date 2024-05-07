#include <cmath>
#include <iostream>

class Point {
private:
    double x;
    double y;

public:
    Point(double x, double y) : x(x), y(y) { }

    double get_x() {
        return x;
    }

    double get_y() {
        return y;
    }

    double find_distance(Point &other) {
        double vx = other.get_x() - this->x;
        double vy = other.get_y() - this->y;

        return sqrt(vx * vx + vy * vy);
    }
};


int main() {
    Point *p1 = new Point(0, 0);
    Point *p2 = new Point(4, 0);

    std::cout << p1->find_distance(*p2);

    return 0;
}
