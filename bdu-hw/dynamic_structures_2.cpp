#include <iostream>

void move_left(int (&arr)[], int &size, const int index) {
    for (int i = index + 1; i < size; i++) {
        arr[i - 1] = arr[i];
    }
    size -= 1;
}

void printArr(int (&arr)[], const int size) {
    std::cout << "Array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

int main() {
    int size;
    std::cout << "Enter array size: ";
    std::cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++) {
        printf_s("%d: ", i);
        std::cin >> arr[i];
    }

    int num;
    std::cout << "Enter number to remove: ";
    std::cin >> num;

    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            move_left(arr, size, i);
        }
    }

    printArr(arr, size);

    return 0;
}
