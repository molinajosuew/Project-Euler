#include <iostream>

using namespace std;

// This is my Binary Search function. It works on arrays of any type and allows
// you to specify whether the array is sorted in ascending or descending order.

template<typename T>
int binary_search(T* array, int size, T value, bool (*compare)(T, T) = [](T a, T b) { return a < b; })
{
    int start = 0, end = size - 1, middle = (start + end) / 2;

    while (start + 1 != end && start != end)
    {
        if (array[middle] == value)
        {
            return middle;
        }

        if (compare(array[middle], value))
        {
            start = middle;
        }
        else
        {
            end = middle;
        }

        middle = (start + end) / 2;
    }

    return array[start] == value ? start : array[end] == value ? end : -1;
}

int linear_search(int array[], int size, int value)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == value)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    const int size = 16;
    string array[size] = { "34", "19", "19", "18", "17", "13", "12", "12", "12", "11", "9", "5", "3", "2", "2", "0" };

    cout << "Binary Search: " << binary_search<string>(array, size, "0");

    return 0;
}