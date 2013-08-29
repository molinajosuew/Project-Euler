// http://challenge.cueup.com/
// Level 2 Solution

#include <iostream>

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

int first_fibonacci_prime(int n)
{
    int i = 1, j = 1;

    while (j <= n || !is_prime(j))
    {
        int t = j;
        j += i;
        i = t;
    }

    return j;
}

int sum_of_prime_divisors(int n)
{
    int sum = 0;

    for (int i = 2; i <= n; i++)
        if (is_prime(i) && n % i == 0)
        {
            sum += i;
            while (n % i == 0)
                n /= i;
        }

    return sum;
}

int main()
{
    std::cout << sum_of_prime_divisors(first_fibonacci_prime(227000) + 1);

    return 0;
}