#include <iostream>
#include <vector>

using namespace std;

// vector<TYPE> name(number)
int main() {
    // important to use round brackets
    vector<unsigned int> vecray(5);
    vecray[2] = 5;
    cout << vecray[2] << endl;
    vecray.at(1) = 44;
    cout << vecray[1];
    // throws out of range
    vecray.at(6) = 33;

}