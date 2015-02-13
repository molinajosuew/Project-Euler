// Project Euler
// Problem 5

// This file uses Prime.cs.

using System;

class Program
{
    static bool LCMIsDone(int[] numArr)
    {
        int counter = 0;
        for (int i = 0; i < numArr.Length; i++)
            if (numArr[i] == 1)
                counter++;
        return counter == numArr.Length ? true : false;
    }
    static int LCM(int[] numArr)
    {
        int result = 1, prime = 2;
        bool found;
        while (!LCMIsDone(numArr))
        {
            found = false;
            for (int i = 0; i < numArr.Length; i++)
                if (numArr[i] % prime == 0)
                {
                    numArr[i] /= prime;
                    found = true;
                }
            if (found)
                result *= prime;
            else
                Prime.nextPrime(ref prime);
        }
        return result;
    }
    static void Main()
    {
        int[] numArr = new int[20];

        for (int i = 1; i <= 20; i++)
            numArr[i - 1] = i;

        Console.WriteLine(LCM(numArr));
    }
}