// Write a program to define two character arrays initialized from string literals.
// Now define a third character array to hold the concatenation of the two arrays.
// Use `strcpy` and `strcat` to copy the two arrays into the third.
#include <iostream>
#include <cstring>
using std::cout;
using std::endl;
using std::strcat;
using std::strcpy;

int main()
{
    char ca1[] = "ABC";
    char ca2[] = "BAC";
    char concat[7]; // 3 + 3 characters + 1 null terminator

    strcpy(concat, ca1); // copy ca1 into concat
    strcat(concat, ca2); // concatenate ca2 to concat

    cout << "Concatenated string: " << concat << endl;

    return 0;
}