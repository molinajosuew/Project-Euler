#include <iostream>
#include <vector>

void subsets_wrapper(std::vector<int>& set, std::vector<int> subset, unsigned int subset_size, int index, std::vector< std::vector<int> >& result)
{
    if (subset.size() == subset_size)
    {
        result.push_back(subset);
    }
    else
    {
        for (unsigned int i = index; i < set.size(); i++)
        {
            subset.push_back(set[i]);
            subsets_wrapper(set, subset, subset_size, i + 1, result);
            subset.pop_back();
        }
    }
}

std::vector< std::vector<int> > subsets(std::vector<int>& set)
{
    int index = 0;
    std::vector<int> subset;
    std::vector< std::vector<int> > result;

    for (unsigned int subset_size = 0; subset_size <= set.size(); subset_size++)
    {
        subsets_wrapper(set, subset, subset_size, index, result);
    }

    return result;
}

int find_max(std::vector<int> set)
{
    if (set.size() == 0)
    {
        return -1;
    }

    std::vector<int>::iterator it = set.begin();
    int max = *it;

    while (++it != set.end())
    {
        if (*it > max)
        {
            max = *it;
        }
    }

    return max;
}

int add(std::vector<int> set)
{
    int sum = 0;

    for (std::vector<int>::iterator it = set.begin(); it != set.end(); it++)
    {
        sum += *it;
    }

    return sum;
}

int main()
{
    int counter = 0;
    std::vector<int> v;

    v.push_back(3);
    v.push_back(4);
    v.push_back(9);
    v.push_back(14);
    v.push_back(15);
    v.push_back(19);
    v.push_back(28);
    v.push_back(37);
    v.push_back(47);
    v.push_back(50);
    v.push_back(54);
    v.push_back(56);
    v.push_back(59);
    v.push_back(61);
    v.push_back(70);
    v.push_back(73);
    v.push_back(78);
    v.push_back(81);
    v.push_back(92);
    v.push_back(95);
    v.push_back(97);
    v.push_back(99);

    std::vector< std::vector<int> > result = subsets(v);

    for (unsigned int i = 0; i < result.size(); i++)
    {
        int max = find_max(result[i]);
        if (add(result[i]) - max == max)
        {
            counter++;
        }
    }

    std::cout << counter << std::endl;
    std::cin.get();

    return 0;
}