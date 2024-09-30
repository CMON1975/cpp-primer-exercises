// Use a range `for` to change all the characters in a `string` to `X`.
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    string s;
    cout << "Type a word and press ENTER: ";
    cin >> s;
    for (auto &c : s)
        c = 'X';
    cout << s << endl;
    return 0;
}