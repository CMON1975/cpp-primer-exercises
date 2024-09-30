// Write a program to read `string`s from the standard input, concatenating what is read into one large `string`, separating the words with spaces. Print the concatenated `string`.
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    string word;
    string cword;
    while (cin >> word)
        cword += word + " ";
    cout << "The combined word is " << cword << endl;
    return 0;
}