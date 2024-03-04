#include <iostream>

/*
*   Задан массив. Сдвинуть все элементы вправо так,
*   чтобы последний элемент оказалася на первом месте 
*/

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
    
    printArr(arr, size);

    int last = arr[size - 1];
    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;

    printArr(arr, size);

    return 0;
}
