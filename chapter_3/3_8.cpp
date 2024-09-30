// Rewrite the program from 3_6.cpp first using a `while` and again using a traditional `for` loop. Which of these approaches do you prefer and why?
// Conclusion: it feels cleaner and "safer" to use the original method, as though that were the way it was intended to be written.
// If fact, this is true: The range-based `for` loop in C++ was intorudced to provide a cleaner and safer way to itrerate over containters like `std::string`.
// It abstracts away the index management, reducing the change of off-by-one errors or accidental misuse of incices.
//
// The range-based loop expresses the intent more clearly: you want to operate on each element of the container directly, without worrying about how to access them.
// This is why many consider it the "modern" or more natural way to write such loops in C++.
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    string swhile;
    string sfor;
    cout << "Type a word and press ENTER: ";
    cin >> swhile;
    sfor = swhile;

    int i = 0;
    while (i < swhile.size())
    {
        swhile[i] = 'X';
        ++i;
    }

    for (size_t j = 0; j < sfor.size(); j++)
    {
        sfor[j] = 'X';
    }

    cout << "While: " << swhile << endl;
    cout << "For: " << sfor << endl;
    return 0;
}