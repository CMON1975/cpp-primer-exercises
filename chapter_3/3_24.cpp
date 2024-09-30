// Redo 3_20.cpp using iterators.
// Read a set of integers into a `vector`.
// Print the sum of each pair of adjacent elements.
// Change your program so that it prints the sum of the first and last elements,
// followed by the sum of the second and second-to-last, and so on.
#include <iostream>
#include <vector>
#include <iterator>
using std::cin;
using std::cout;
using std::distance;
using std::endl;
using std::size_t;
using std::vector;

int main()
{
    vector<int> vec1;
    int entry;
    while (cin >> entry)
    {
        vec1.push_back(entry);
    }

    if (vec1.size() > 0)
    {
        // sum and print adjacent values
        for (auto it = vec1.begin(); it != vec1.end(); ++it)
        {
            int sum = *it + (*it + 1);
            cout << sum << " ";
        }
        cout << endl;
        // sum and print "outside in"
        for (auto it = vec1.begin(); it != vec1.end(); ++it)
        {
            auto rit = vec1.rbegin() + distance(vec1.begin(), it); // reverse iterator from the same position
            int sum = *it + *rit;
            cout << sum << " ";
        }
    }
}
