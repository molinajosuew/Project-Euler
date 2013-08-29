using System;
using System.Collections.Generic;

class Program
{
    static List<int> Sieve(int limit)
    {
        bool[] table = new bool[limit + 1];
        table[0] = table[1] = true;
        for (int i = 2; i < table.Length; i++)
        {
            if (table[i])
                continue;
            for (int j = 2 * i; j < table.Length; j += i)
                table[j] = true;
        }
        var result = new List<int>();
        for (int i = 0; i < table.Length; i++)
            if (!table[i])
                result.Add(i);
        return result;
    }

    static void Main()
    {
        var primes = Sieve(2000000);
        long sum = 0;
        foreach (int i in primes)
            sum += i;
        Console.WriteLine(sum);
    }
}