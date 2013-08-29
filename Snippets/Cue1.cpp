#include <iostream>

using namespace std;

bool IsPalindrome(string s)
{
    for (int i = 0; i < s.length() / 2; i++)
        if (s[i] != s[s.length() - i - 1])
            return false;
    return true;
}

int main()
{
    string s = "I like racecars that go fast";

    for (int i = s.length(); i >= 2; i--)
        for (int j = 0; j <= s.length() - i; j++)
            if (IsPalindrome(s.substr(j, i)))
                cout << s.substr(j, i) << endl;

    return 0;
}