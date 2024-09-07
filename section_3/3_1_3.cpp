// Rewrite the exercise 1_11.cpp with appropriate `using` declarations.
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    cout << "Enter two numbers (the first must be lower than the second):" << endl;
    int v1 = 0, v2 = 0;
    cin >> v1 >> v2;

    // keep executing the while as long as v1 is less than or equal to v2
    while (v1 <= v2)
    {
        cout << v1 << endl;
        ++v1; // add 1 to val
    }

    return 0;
}