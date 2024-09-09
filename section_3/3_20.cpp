// Read a set of integers into a `vector`.
// Print the sum of each pair of adjacent elements.
// Change your program so that it prints the sum of the first and last elements,
// followed by the sum of the second and second-to-last, and so on.
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
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
        for (size_t i = 0; i < vec1.size() - 1; ++i)
        {
            int sum = vec1[i] + vec1[i + 1];
            cout << sum << " ";
        }
        cout << endl;
        // sum and print "outside in"
        for (size_t i = 0; i <= vec1.size() / 2; ++i)
        {
            size_t j = vec1.size() - 1 - i; // Index from the end
            int sum = vec1[i] + vec1[j];
            cout << sum << " ";
        }
    }
}
