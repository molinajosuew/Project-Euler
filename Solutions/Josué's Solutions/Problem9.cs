using System;

class Program
{
    static void Main()
    {
        bool found = false;

        for (int m = 2; !found; m++)
        {
            for (int n = 1; n < m; n++)
            {
                int a = m * m - n * n;
                int b = 2 * m * n;
                int c = m * m + n * n;

                if (a + b + c == 1000)
                {
                    Console.WriteLine(a * b * c);
                    found = true;
                    break;
                }
            }
        }
    }
}