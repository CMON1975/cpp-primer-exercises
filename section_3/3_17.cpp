// read a sequence of words from `cin` and store the values in a `vector`. After you've read all the words, process the `vector`
// and change each word to uppercase. Print the transformed elements, eight words to a line.
#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> vec;
    string word;
    while (cin >> word)
    {
        vec.push_back(word);
    }

    if (vec.size() > 0)
    {
        for (auto &word : vec)
        {
            for (auto &c : word)
            {
                c = toupper(c);
            }
        }
        // handle printing 8 words per line
        int word_count = 0;
        for (const auto &word : vec)
        {
            cout << word << " ";
            if (++word_count % 8 == 0)
            {
                cout << endl;
            }
        }
        // Print a final newline if the last line didn't have 8 words
        if (word_count % 8 != 0)
        {
            cout << endl;
        }
    }
}
