#include <iostream>

bool isTriangle(double a, double b, double c) {
    if (a < b + c and b < a + c and c < a + b) {
        return true;
    }

    return false;
}

int main() {
    double x = 1;
    double y = 2;
    double z = 3;
    double t = 4;

    double count = 0;

    if (isTriangle(x, y, z)) count += 1;
    if (isTriangle(t, y, z)) count += 1;
    if (isTriangle(x, t, z)) count += 1;
    if (isTriangle(x, y, t)) count += 1;

    std::cout << "Triangles count: " << count << '\n';

    return 0;
}
