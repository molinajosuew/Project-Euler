#include <iostream>
#include <unordered_set>

int* sieve(int n, int& s)
{
    bool *m = new bool[n + 1]();

    for (int i = 2; i <= n; i++)
    {
        m[i] = true;
    }

    for (int i = 2; i <= n; i++)
    {
        if (!m[i])
        {
            continue;
        }

        for (int j = 2 * i; j <= n; j += i)
        {
            m[j] = false;
        }
    }

    s = 0;

    for (int i = 0; i < n + 1; i++)
    {
        if (m[i])
        {
            s++;
        }
    }

    int *p = new int[s], d = 0;

    for (int i = 0; i < n + 1; i++)
    {
        if (m[i])
        {
            p[d++] = i;
        }
    }

    delete [] m;

    return p;
}

int pwr(int base, int exponent)
{
    int result = 1;

    for (int i = 0; i < exponent; ++i)
    {
        result *= base;
    }

    return result;
}

int main()
{
    int size, limit = 50000000;
    int* primes = sieve(7072, size);
    std::unordered_set<int> numbers;

    for (int x = 0; pwr(primes[x], 2) < limit - 24; ++x)
    {
        for (int y = 0; pwr(primes[x], 2) + pwr(primes[y], 3) < limit - 16; ++y)
        {
            for (int z = 0; pwr(primes[x], 2) + pwr(primes[y], 3) + pwr(primes[z], 4) < limit; ++z)
            {
                numbers.insert(pwr(primes[x], 2) + pwr(primes[y], 3) + pwr(primes[z], 4));
            }
        }
    }

    std::cout << numbers.size();
    std::cin.get();

    return 0;
}