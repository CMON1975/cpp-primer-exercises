// What would happen if you define the loop control variable in the previous exercise as the type `char`?
// Prediction: As each element in a `std::string` is a `char`, all this is doing it explicitly defining the variable.
// Result:
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
    for (char &c : s)
        c = 'X';
    cout << s << endl;
    return 0;
}