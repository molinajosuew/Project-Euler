#include <iostream>

using namespace std;

int binary_search(int arr[], int siz, int num)
{
    int beg = 0, end = siz - 1, mid = (beg + end) / 2;

    while (beg + 1 != end)
    {
        if (arr[mid] == num)
            return mid;

        if (arr[mid] > num)
            beg = mid;
        else
            end = mid;

        mid = (beg + end) / 2;
    }

    return (arr[beg] == num) ? beg :
           (arr[end] == num) ? end : -1;
}

int linear_search(int arr[], int siz, int num)
{
    for (int i = 0; i < siz; i++)
        if (arr[i] == num)
            return i;

    return -1;
}

int main()
{
    const int siz = 16;
    int arr[siz] = { 34, 19, 19, 18, 17, 13, 12, 12, 12, 11, 9, 5, 3, 2, 2, 0 };

    cout << "Binary Search: " << binary_search(arr, siz, 0) << endl;
    cout << "Linear Search: " << linear_search(arr, siz, 0);

    return 0;
}