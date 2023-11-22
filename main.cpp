#include <iostream>
#include "dynArray.hpp"

int main()
{
    DynArray<int>* arr1 = new DynArray<int>(5);
    DynArray<int>* arr2 = new DynArray<int>(10);

    std::cout << "Arr 1: \t" << arr1->Capacity << '\t' << arr1->Size << std::endl;
    std::cout << "Arr 2: \t" << arr2->Capacity << '\t' << arr2->Size << std::endl;

    arr2->Append(1);
    arr2->Append(2);
    arr2->Append(3);

    std::cout << "Arr 1: \t" << arr1->Capacity << '\t' << arr1->Size << std::endl;
    std::cout << "Arr 2: \t" << arr2->Capacity << '\t' << arr2->Size << std::endl;

    *arr1 = *arr2;
    delete arr2;
    arr2 = new DynArray<int>(7);

    std::cout << "Arr 1: \t" << arr1->Capacity << '\t' << arr1->Size << std::endl;
    std::cout << "Arr 2: \t" << arr2->Capacity << '\t' << arr2->Size << std::endl;

    return 0;
}