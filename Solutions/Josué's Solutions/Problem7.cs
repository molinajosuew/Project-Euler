using System;

class Program
{
    static bool IsPrime(int number)
    {
        if (number == 2)
            return true;
        if (number < 2 || number % 2 == 0)
            return false;
        for (int i = 3; i * i <= number; i += 2)
            if (number % i == 0)
                return false;
        return true;
    }

    static void Main()
    {
        int counter = 0, number = 1;
        while (counter != 10001)
            if (IsPrime(++number))
                counter++;
        Console.WriteLine(number);
    }
}