// Utility Class
// This class facilitates working with prime numbers.

static class Prime
{
    static int[] Sieve(int limit)
    {
        bool?[] hash = new bool?[limit + 1];

        // Find prime numbers.
        hash[0] = false;
        hash[1] = false;
        for (int i = 0; i < limit + 1; i++)
        {
            if (hash[i] == null)
            {
                hash[i] = true;
                for (int j = i * 2; j < limit + 1; j += i)
                {
                    hash[j] = false;
                }
            }
        }

        // Count prime numbers.
        int counter = 0;
        for (int i = 0; i < limit + 1; i++)
        {
            if (hash[i].Value)
            {
                counter++;
            }
        }

        // Store prime numbers.
        int[] primes = new int[counter];
        counter = 0;
        for (int i = 0; i < limit + 1; i++)
        {
            if (hash[i].Value)
            {
                primes[counter] = i;
                counter++;
            }
        }

        return primes;
    }
    public static bool isPrime(int n)
    {
        if (n == 2)
        {
            return true;
        }
        if (n < 2 || n % 2 == 0)
        {
            return false;
        }
        for (int i = 3; i < n; i += 2)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
    public static void nextPrime(ref int n)
    {
        while (!isPrime(++n)) { }
    }
}
