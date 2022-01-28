#include <iostream>

using namespace std;

int main() {

   
    double volume;
    double height;
    double lenght;
    double width;

    
    // calculate the volume of a box page 89
    cout << "Please insert heigt: ";
    cin >> height;
    cout << "Please insert lengt: ";
    cin >> lenght;
    cout << "Please insert width: ";
    cin >> width;
    volume = (height * lenght * width)/1000;
    cout << "The box volume is " << volume << " litres" << '\n';

}