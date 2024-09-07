// Rewrite the exercises from 1_9.cpp, 1_10.cpp, 1_11.cpp, and 2_41_1.cpp, 2_42.2.cpp, and 2_42_3.cpp with appropriate `using` declarations.
#include <iostream>
using std::cout;
using std::endl;
int main()
{
    int val = 10;
    // keep executing the while as long as val is greater than or equal to zero
    while (val >= 0)
    {
        cout << val << endl;
        --val; // minus 1 from val
    }

    return 0;
}