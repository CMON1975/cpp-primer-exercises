// write a program to print the size and contents of the `vectors` from 3_13.md. Check whether your answers to that exercise were correct.
// If not, restudy unti you get it, dummy.
#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::endl;
using std::string;
using std::vector;

template <typename T> // I know templates haven't been covered yet. I asked GPT for a simple class to handle the requirements of this exercise.
class VectorInfo
{
private:
    vector<T> vec;

public:
    // constructor that takes a vector as an argument
    VectorInfo(const vector<T> &v) : vec(v) {}

    // method to print the size and contents of the vector
    void printSizeAndContents() const
    {
        cout << "Size of vector: " << vec.size() << endl;
        cout << "Vector contents: ";
        for (const auto &elem : vec)
        {
            cout << elem << " ";
        }
        cout << endl;
    }
};

int main()
{
    // vectors from 3_13.md
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    // Create VectorInfo objects and print size and contents
    VectorInfo<int> info1(v1);
    VectorInfo<int> info2(v2);
    VectorInfo<int> info3(v3);
    VectorInfo<int> info4(v4);
    VectorInfo<int> info5(v5);
    VectorInfo<string> info6(v6);
    VectorInfo<string> info7(v7);

    cout << "v1: " << endl;
    info1.printSizeAndContents();
    cout << "v2: " << endl;
    info2.printSizeAndContents();
    cout << "v3: " << endl;
    info3.printSizeAndContents();
    cout << "v4: " << endl;
    info4.printSizeAndContents();
    cout << "v5: " << endl;
    info5.printSizeAndContents();
    cout << "v6: " << endl;
    info6.printSizeAndContents();
    cout << "v7: " << endl;
    info7.printSizeAndContents();

    return 0;
}