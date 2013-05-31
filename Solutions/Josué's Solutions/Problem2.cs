// Project Euler
// Problem 2

using System;

class Problem2
{
    static void Main()
    {
        int sum = 0, a = 0, b = 1, c = a + b;
        
        while (c < 4000000)
        {
            if (c % 2 == 0)
            {
                sum += c;
            }
            
            a = b;
            b = c;
            c = a + b;
        }
        
        Console.WriteLine(sum);
    }
}
