using System;

class Program
{
    static bool isPalindrome(int n)
    {
        for (int i = 0; i < n.ToString().Length / 2; i++)
            if (n.ToString()[i] != n.ToString()[n.ToString().Length - i - 1])
                return false;
        return true;
    }
    static void Main()
    {
        int max = 0;
        for (int i = 100; i <= 999; i++)
            for (int j = 100; j <= 999; j++)
                if (isPalindrome(i * j) && i * j > max)
                    max = i * j;
        Console.WriteLine(max);
    }
}
