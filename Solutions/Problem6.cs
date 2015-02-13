using System;

class Program
{
    static void Main()
    {
        int n = 100;
        Console.WriteLine(n * n * (n + 1) * (n + 1) / 4 - n * (n + 1) * (2 * n + 1) / 6);
    }
}