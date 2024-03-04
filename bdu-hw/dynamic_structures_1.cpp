#include <iostream>

/*
*   Задан массив (отсортированный, по условию, но в коде ниже, 
*   ввиду удобства, отсортировывается после ввода. Эту часть можно пропустить) и число.
*   Вставить число в массив так, чтобы порядок элементов не нарушился
*/

void printArr(int (&arr)[], const int size) {
    std::cout << "Array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

void sort(int (&arr)[], const int size) {
    for (int i = 0; i < size; i++) {
        int index = i;
        while (index > 0 and arr[index - 1] > arr[index]) {
            std::swap(arr[index - 1], arr[index]);
            index -= 1;
        }
    }    
}

int main() {
    int size;
    std::cout << "Enter array size: ";
    std::cin >> size;

    size += 1;
    int arr[size];
    for (int i = 0; i < size - 1; i++) {
        printf_s("%d: ", i);
        std::cin >> arr[i];
    }
    
    sort(arr, size - 1);

    int num;
    std::cout << "Enter number to insert: ";
    std::cin >> num;

    int i = 0;
    while (arr[i] < num and i < size - 1) {
        i += 1;
    }

    for (int j = size - 2; j >= i; j--) {
        std::cout << j << " - Pass" << '\n';
        arr[j + 1] = arr[j];
    }
    arr[i] = num;

    printArr(arr, size);


    return 0;
}
