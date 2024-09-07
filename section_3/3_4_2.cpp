// Write a program to read two strings and report whether the strings have the same length. If not, report which of the two is longer.
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    auto len1 = s1.size();
    auto len2 = s2.size();
    if (len1 != len2)
    {
        if (len1 > len2)
            cout << s1 << " is longer than " << s2 << endl;
        else
            cout << s2 << " is longer than " << s1 << endl;
    }
    else
        cout << s1 << " is the same length as " << s2 << endl;
    return 0;
}