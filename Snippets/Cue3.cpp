#include <iostream>
#include <vector>
#include <algorithm>

void my_function(std::vector<int>&, int, int, int&);

int main()
{
    const int siz = 22;
    int num[siz] = { 3, 4, 9, 14, 15, 19, 28, 37, 47, 50, 54, 56, 59, 61, 70, 73, 78, 81, 92, 95, 97, 99 };
    
    int cnt = 0;
    std::vector<int> vec(num, num + siz);

    my_function(vec, 0, 0, cnt);

    std::cout << cnt - siz;

    return 0;
}

void my_function(std::vector<int>& vec, int ind, int sum, int& cnt)
{
    static int max = *std::max_element(vec.begin(), vec.end());

    if (sum > max)
    {
        return;
    }

    if (std::binary_search(vec.begin(), vec.end(), sum))
    {
        cnt++;
    }

    for (int i = ind; sum + vec[i] <= max; i++)
    {
        my_function(vec, i + 1, sum + vec[i], cnt);
    }
}