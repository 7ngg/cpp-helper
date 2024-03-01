#include <iostream>

template <typename T>
class DynArray
{
public:
    T* Array;
    int Capacity;
    int Size;

    DynArray(int startingCapacity = 0)
    {
        if (startingCapacity == 0)
        {
            Array = nullptr;
            Capacity = 0;
            Size = 0;
        }
        else
        {
            Capacity = startingCapacity;
            Array = new T[Capacity];
            Size = 0;
        }
    }


    void Append(const T& _data)
    {
        if (Size != Capacity)
        {
            Array[Size] = _data;
            Size += 1;
        }
        else
        {
            Reserve();
            Append(_data);
        }
    }


    void Reserve(int newCapactity = 0)
    {
        if (newCapactity == 0 and Capacity == 0)
        {
            Capacity = 1;
        }
        else if (newCapactity == 0 and Capacity != 0)
        {
            Capacity *= 2;
        }
        else if (newCapactity > Capacity)
        {
            Capacity = newCapactity;
        }

        T* temp = new T[Capacity];
        for (int i = 0; i < Size; i++)
        {
            temp[i] = Array[i];
        }

        delete[] Array;
        Array = temp;
        // temp здесь удалится сам
    }
};
