// Write a program to read two strings and report whether the strings are equal. If not, report which of the two is larger.
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
    if (s1 != s2)
    {
        if (s1 > s2)
            cout << s1 << " is larger than " << s2 << endl;
        else
            cout << s2 << " is larger than " << s1 << endl;
    }
    else
        cout << s1 << " is equal to " << s2 << endl;
    return 0;
}