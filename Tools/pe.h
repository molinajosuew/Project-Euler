#ifndef PE_H
#define PE_H

namespace pe
{
    bool* sieve(int n)
    {
        bool* m = new bool[n + 1]();
        for (int i = 2; i <= n; i++)
            m[i] = true;
        for (int i = 2; i <= n; i++)
        {
            if (!m[i])
                continue;
            for (int j = 2 * i; j <= n; j += i)
                m[j] = false;
        }
        return m;
    }

    bool is_prime(int n)
    {
        if (n < 2)
            return false;
        if (n == 2)
            return true;
        if (n % 2 == 0)
            return false;
        for (int i = 3; i * i <= n; i += 2)
            if (n % i == 0)
                return false;
        return true;
    }
}

#endif