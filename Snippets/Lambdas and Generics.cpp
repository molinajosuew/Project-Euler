#include <iostream>

template <class T>
void swap(T& a, T& b)
{
    T t = a;
    a = b;
    b = t;
}

template <class T>
void bubble_sort(T* array, int size, bool (*compare)(T, T))
{
    bool swapped;
    do
    {
        swapped = false;

        for (int i = 0; i < size - 1; i++)
        {
            if (compare(array[i + 1], array[i]))
            {
                swap(array[i], array[i + 1]);
                swapped = true;
            }
        }
    } while (swapped);
}

int main()
{
    const int size = 8;
    char array[size] = { 'e', 'q', 'h', 'v', 'p', 'a', 'q', 'x' };

    bubble_sort<char>(array, size, [](char a, char b) { return a < b; });

    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << ' ';
    }

    return 0;
}