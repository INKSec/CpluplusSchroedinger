#include <iostream>
#include <limits>


using namespace std;
// shows that float is only exact for seven digits
main() {

float fval = 1000.12 / 1.2345;
double dval = 1000.12 / 1.2345;

cout.precision(10);
cout << fval << endl;
cout << dval << endl;



}