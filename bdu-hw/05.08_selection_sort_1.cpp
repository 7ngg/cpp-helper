#include <iostream>

void print_array(int* arr, const int size) {
    for (size_t i = 0; i < size; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

int find_max(int* arr, const int size) {
    int maxIndex = 0;
    for (size_t i = 0; i < size; i++) {
        if (arr[maxIndex] < arr[i]) {
            maxIndex = i;
        }
    }

    return maxIndex;
}

void sort_array(int* arr, const int size) {
    for (size_t i = 0; i < size; i++) {
        int maxIndex = find_max(arr, size - i);
        std::swap(arr[size - i - 1], arr[maxIndex]);
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
