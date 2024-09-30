#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> v6{10, "hi"};

    for (const auto &str : v6)
    {
        cout << "[" << str << "]" << endl;
    }

    return 0;
}
