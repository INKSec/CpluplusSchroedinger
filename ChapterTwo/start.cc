// This bibliothek let me read inputs and show outputs
#include <iostream>
#include <cstdlib>
using namespace std;
// Kommentare wie immer

/*Mehrzeilige
auch*/
int main() {

// Standard output on screen
cout<< "Mein Erstes Programm\n";
// exception handling without buffer
cerr<< "Coolio\n";
// exception handling with buffer
clog<< "Ausgabe...\n";

int number;
cout<< "Enter number:";
cin>> number;
cout << "Your number is " << number <<endl;

return 0;

/*
how to end a line:
keywort << endl is the slowest version, because it triggers an extra synchronisation and prints out everything inside the buffer
<< '\n' is the sparingliest solution
<< "\n" another one
"String\n" is the best method and known from c


*/

}