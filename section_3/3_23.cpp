// Write a program to create a `vector` with ten `int` elements.
// Using an iterator, assign each element a value that is 2x its current value.
// Test by printing the `vector`
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vec(10, 3); // 10-element vector, each initialized to 3

    // double each element with iterator
    for (auto it = vec.begin(); it != vec.end(); ++it)
    {
        *it *= 2;
    }

    // print the updated vector
    for (auto it = vec.cbegin(); it != vec.cend(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}