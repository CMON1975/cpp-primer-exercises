// Write a program to compare two strings. Now write a program to compare the values of two C-style character strings.
#include <iostream>
#include <string>
#include <cstring>
using std::cout;
using std::endl;
using std::strcmp;
using std::string;

void stringCompare(const string &a, const string &b)
{
    if (a < b)
    {
        cout << "the first string is less than the second string" << endl;
    }
    else if (a > b)
    {
        cout << "the first string is greater than the second string" << endl;
    }
    else
    {
        cout << "the strings are equal" << endl;
    }
}

int main()
{
    string s1 = "A string example";
    string s2 = "A different string";

    char ca1[] = "ABC";
    char ca2[] = "BCA";

    // comparing C++ strings
    stringCompare(s1, s2);
    stringCompare(s1, s1);
    stringCompare(s2, s1);

    // comparing C-style strings
    if (strcmp(ca1, ca2) < 0)
    {
        cout << "cstring a is less than cstring b" << endl;
    }
    else if (strcmp(ca1, ca2) > 0)
    {
        cout << "cstring a is greater than cstring b" << endl;
    }
    else
    {
        cout << "cstring a is equal to cstring b" << endl;
    }

    return 0;
}