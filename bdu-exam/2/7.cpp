#include <cmath>
#include <iostream>

bool isTriangle(double a, double b, double c) {
    if (a < b + c and b < a + c and c < a + b) {
        return true;
    }

    return false;
}

double get_perimeter(double a, double b, double c) {
    return a + b + c;
}

double get_area(double a, double b, double c) {
    double p = get_perimeter(a, b, c) / 2;

    return sqrt(p * (p - a) * (p - b) * (p -c));
}

int main() {
    double a = 3;    
    double b = 4;    
    double c = 5;    

    if (isTriangle(a, b, c)) {
        std::cout << "Perimeter: " << get_perimeter(a, b, c) << '\n';
        std::cout << "Area: " << get_area(a, b, c) << '\n';
    } else {
        std::cout << "Triangle does not exist" << '\n';
    }

    return 0;
}
