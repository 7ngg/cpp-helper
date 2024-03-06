#include <iostream>

/*
*   Задан массив из `n` элементов. Вывести симметричный массив
*/

int main() {
    int size;
    std::cout << "Enter array size: ";
    std::cin >> size;

    int A[size];
    for (int i = 0; i < size; i++) {
        std::cout << "Enter element " << i << " : ";
        std::cin >> A[i];
    }

    std::cout << "Initial array: ";
    for (int i = 0; i < size; i++) {
        std::cout << A[i] << ' ';
    }
    std::cout << std::endl;

    for (int i = 0; i < size / 2; i++) {
        std::swap(A[i], A[size - 1 - i]);
    }

    std::cout << "Result: ";
    for (int i = 0; i < size; i++) {
        std::cout << A[i] << ' ';
    }
    std::cout << std::endl;

    return 0;
}
