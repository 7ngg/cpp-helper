#include <iostream>
#include <utility>

void print_array(int* arr, const int size) {
    for (size_t i = 0; i < size; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

void sort_array(int *arr, const int size) {
    for (size_t i = 0; i < size; i++) {
        int maxIndex = 0;
        for (size_t j = 0; j < size - i; j++) {
            if (arr[maxIndex] < arr[j]) {
                maxIndex = j;
            }
        }
        std::swap(arr[maxIndex], arr[size - i - 1]);
    }
}

int main() {
    const int size = 5;
    int *arr = new int[size] { 5, 12, -48, 0, 0 };

    std::cout << "Initial array: ";
    print_array(arr, size);
    std::cout << "Sorted array: ";
    sort_array(arr, size);
    print_array(arr, size);

    return 0;
}
