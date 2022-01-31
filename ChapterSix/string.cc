#include <iostream>
#include <string>

using namespace std;

int main() {

    string aString;
    aString = "its easy as that\n";
    cout << aString;
    string aString2;
    getline(cin, aString2);
    cout << aString2 << endl;

    // reads only until first space
    string aString3;
    cin >> aString3;
    cout << aString3 << endl;

    // fills a string with the same symbol ten times
    string aString4(10, 'a');
    cout << aString4 << endl;

    // new way to use strings
    string aString5{"This is new"};
    cout << aString5 << endl;

    

}