// The Cue Programming Challenge: 2
// Josué Molina

#include <iostream>

bool is_prime(int);
int first_greatest_fibonacci_prime(int);
int sum_of_prime_divisors(int);

int main()
{
    std::cout << sum_of_prime_divisors(first_greatest_fibonacci_prime(227000) + 1);

    return 0;
}

bool is_prime(int num)
{
    if (num < 2)
    {
        return false;
    }

    if (num == 2)
    {
        return true;
    }

    if (num % 2 == 0)
    {
        return false;
    }

    for (int i = 3; i * i <= num; i += 2)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

int first_greatest_fibonacci_prime(int num)
{
    int i = 1, j = 1;

    while (j <= num || !is_prime(j))
    {
        int t = j;
        j += i;
        i = t;
    }

    return j;
}

int sum_of_prime_divisors(int num)
{
    int sum = 0;

    for (int i = 2; i <= num; i++)
    {
        if (is_prime(i) && num % i == 0)
        {
            sum += i;

            while (num % i == 0)
            {
                num /= i;
            }
        }
    }

    return sum;
}