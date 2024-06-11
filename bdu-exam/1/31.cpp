#include <iostream>

int main()
{
   int size, count = 0;
   std::cout << "Enter array size: ";
   std::cin >> size;

   int arr[size];
   for (int i = 0; i < size; i++)
   {
       printf("arr[%d]: ", i);
       std::cin >> arr[i];
       if (arr[i] > 10 and arr[i] < 20) count += 1;
   }

   std::cout << "Result: " << count << std::endl;

    return 0;
}
