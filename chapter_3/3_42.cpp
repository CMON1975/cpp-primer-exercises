// Write a program to copy a `vector` of `ints` into an array of `ints`
#include <vector>
#include <iostream>
#include <algorithm>

using std::begin;
using std::copy;
using std::cout;
using std::end;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec{0, 1, 2, 3, 4, 5};
    int int_arr[6];

    copy(ivec.begin(), ivec.end(), int_arr);

    for (const auto &elem : int_arr)
        cout << elem << " ";
    cout << endl;

    return 0;
}