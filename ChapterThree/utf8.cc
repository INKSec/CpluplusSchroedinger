#include <iostream>
#include <limits>
using namespace std;

int main() {

char einA = 'A', einZ = 'Z';

cout << einA << '\t' << einZ << '\n';
cout << int(einA) << '\t' << int(einZ) << '\n';

char A65 = 65, Z90 = 90;
cout << A65 << '\t' << Z90 << '\n';
wchar_t AA65 = 9;
wcout << sizeof(AA65) << '\n';
cout << sizeof(int) << '\n';
cout << numeric_limits<int>::min() << '\n';

cout << numeric_limits<char>::digits << '\n';

char C = -2;
cout << C << '\n'; 

int seperator = 1'000'000;
cout << seperator << '\n';
int seperator2 = 10'0'0'0'0'0;
cout << seperator2 << '\n';
}



