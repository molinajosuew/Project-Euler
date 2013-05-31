using System;

class Problem3
{
    static void Main()
    {
        long number = 600851475143;

        for (int i = 2; i < number; Prime.nextPrime(ref i))
        {
            while (number % i == 0)
            {
                number /= i;
            }
        }

        Console.WriteLine(number);
    }
}
