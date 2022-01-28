#include <iostream>
#include <cmath>
using namespace std;

// calculate the diagonal of a rectangle

int main() {

int length;
int width;
float result;
cout << "Please insert lenght: ";
cin >> length;

cout << "Please insert width ";
cin >> width;

result = sqrt((length * length) + (width * width));
cout << result;

}