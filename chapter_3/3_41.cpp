// Write a program to initialize a `vector` from an array of `ints`.
#include <vector>
#include <iostream>
#include <iterator>

using std::begin;
using std::cout;
using std::end;
using std::endl;
using std::vector;

int main()
{
    int int_arr[] = {0, 1, 2, 3, 4, 5};
    vector<int> ivec(begin(int_arr), end(int_arr));

    for (const auto &elem : ivec)
        cout << elem << " ";
    cout << endl;

    return 0;
}