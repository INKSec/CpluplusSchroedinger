#include <iostream>
#include <cstdlib>

using namespace std;
// request account balance and amount of sausage from butcher Meier
int main() {

float balance;
unsigned int sausage;

cout << "Please enter tour account balance\n";
cin >> balance;
cout << "Please enter the amount of meat you want in gram\n";
cin >> sausage;
cout << "balance: " << balance
     << "\nSausage: " << sausage;


return 0;
}
