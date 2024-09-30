#include <vector>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    string input;
    vector<string> stored_values;

    cout << "Enter values (type 'stop' to end): " << endl;
    while (true)
    {
        cin >> input;

        if (input == "stop") // Check for the termination condition
        {
            cout << "Input stopped by user." << endl;
            break;
        }

        stored_values.push_back(input);
    }

    cout << "Your stored values are: ";
    for (const string &value : stored_values)
    {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
