// Write a program to read the standard input a word at a time.
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    string word;
    // read input a line at a time until end-of-file
    while (cin >> word)
        cout << word << endl;
    return 0;
}
