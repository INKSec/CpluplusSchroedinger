#include <iostream>
using namespace std;

// don't compare or mix unsigned and signed

int main() {
    
    unsigned int a = 4294967295;
    signed int b = -1;

    unsigned int d = 5;
    signed int e = 5;

    auto aa = 4294967295;
    auto bb = -1;

    bool c = a == b;
    bool f = d == e;
    bool cc = aa == bb;
    
    cout << c << '\n';
    cout << f << '\n';
    cout << cc << '\n';
}