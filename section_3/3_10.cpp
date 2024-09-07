// Write a program that reads a string of characters including punctuation and writes what was read but with the punctuation removed.
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    string s;
    string result;
    cout << "Type a word with punctuation marks and press ENTER: ";
    cin >> s;
    for (auto &c : s)
        if (!ispunct(c))
            result += c;
    cout << result << endl;
    return 0;
}