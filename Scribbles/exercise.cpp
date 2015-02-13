#include <iostream>
#include <fstream>

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

// This function implements my version
// of the insertion sort algorithm.
void sort(int n[], int s)
{
    for (int i = 0; i < s - 1; i++)
    {
        int m = i;
        for (int j = i; j < s; j++)
            if (n[j] < n[m])
                m = j;
        swap(&n[i], &n[m]);
    }
}

int main()
{
    std::ifstream f;
    const int s = 1000;
    int n[s];
    
    // Read the numbers.
    f.open("input.txt");
    for (int i = 0; i < 1000; i++)
        f >> n[i];
    f.close();

    // Sort the numbers.
    sort(n, s);
    
    // Display the numbers.
    for (int i = 0; i < 1000; i++)
        std::cout << n[i] << std::endl;

    return 0;
}