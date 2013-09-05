#include <iostream>

bool is_palindrome(std::string);

int main()
{
    std::string str = "FourscoreandsevenyearsagoourfaathersbroughtforthonthiscontainentanewnationconceivedinzLibertyanddedicatedtothepropositionthatallmenarecreatedequalNowweareengagedinagre" +
                      "ahtcivilwartestingwhetherthatnaptionoranynartionsoconceivedandsodedicatedcanlongendureWeareqmetonagreatbattlefiemldoftzhatwarWehavecometodedicpateaportionofthatfieldas" +
                      "afinalrestingplaceforthosewhoheregavetheirlivesthatthatnationmightliveItisaltogetherfangandproperthatweshoulddothisButinalargersensewecannotdedicatewecannotconsecratew" +
                      "ecannothallowthisgroundThebravelmenlivinganddeadwhostruggledherehaveconsecrateditfaraboveourpoorponwertoaddordetractTgheworldadswfilllittlenotlenorlongrememberwhatwesa" +
                      "yherebutitcanneverforgetwhattheydidhereItisforusthelivingrathertobededicatedheretotheulnfinishedworkwhichtheywhofoughtherehavethusfarsonoblyadvancedItisratherforustobe" +
                      "herededicatedtothegreattdafskremainingbeforeusthatfromthesehonoreddeadwetakeincreaseddevotiontothatcauseforwhichtheygavethelastpfullmeasureofdevotionthatweherehighlyre" +
                      "solvethatthesedeadshallnothavediedinvainthatthisnationunsderGodshallhaveanewbirthoffreedomandthatgovernmentofthepeoplebythepeopleforthepeopleshallnotperishfromtheearth";

    for (int i = str.length(); i >= 2; i--)
    {
        for (int j = 0; j <= str.length() - i; j++)
        {
            if (is_palindrome(str.substr(j, i)))
            {
                std::cout << str.substr(j, i) << std::endl;
                return 0;
            }
        }
    }

    return 0;
}

bool is_palindrome(std::string str)
{
    for (int i = 0; i < str.length() / 2; i++)
    {
        if (str[i] != str[str.length() - i - 1])
        {
            return false;
        }
    }

    return true;
}