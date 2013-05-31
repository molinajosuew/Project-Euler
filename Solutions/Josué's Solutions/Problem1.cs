// Project Euler
// Problem 1

using System;

class Problem1
{
    static void Main()
    {
        int sum = 0;

        for (int i = 1; i < 1000; i++)
        {
            sum += i % 3 == 0 || i % 5 == 0 ? i : 0;
        }

        Console.WriteLine(sum);
    }
}
