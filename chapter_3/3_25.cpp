// Rewrite the grade clustering program from page 104 using iterators instead of subscripts
// Original code:
// vector<unsigned> scores(11, 0); // 11 buckets, all initially 0
// unsigned grade;
// while (cin >> grade) {   // read the grades
//  if (grade <= 100)       // handle only valid grades
//      ++scores[grade/10]; // increment the counter for the current cluster
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;
using ConstVecIter = vector<unsigned>::const_iterator;

int main()
{
    vector<unsigned> scores(11, 0);
    unsigned grade;
    while (cin >> grade)
    {
        if (grade <= 100)
        {
            // determine the correct index by dividing grade by 10
            auto it = scores.begin() + (grade / 10);
            // increment the value at the index in the vector
            (*it)++;
        }
    }

    // debug output
    unsigned range_start = 0;
    for (ConstVecIter it = scores.begin(); it != scores.end(); ++it, range_start += 10)
    {
        if (range_start == 100)
        {
            cout << "100%: " << *it << "\n"; // Special case for the perfect score
        }
        else
        {
            cout << range_start << "-" << range_start + 9 << "%: " << *it << "\n";
        }
    }

    return 0;
}