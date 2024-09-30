// Write a program to read a sequence of `ints` from `cin` and store the values in a `vector`.
#include <vector>
#include <iostream>
#include <limits>

using std::cin;
using std::cout;
using std::endl;
using std::numeric_limits;
using std::streamsize;
using std::vector;

int main()
{
    int input;
    vector<int> stored_values;

    cout << "Enter integers (non-int to stop): " << endl;
    while (true)
    {
        cin >> input;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Non-integer input detected. Stopping input." << endl;
            break;
        }

        stored_values.push_back(input);
    }

    cout << "Your stored values are: ";
    for (const int &value : stored_values)
    {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}