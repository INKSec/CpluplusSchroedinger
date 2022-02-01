#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct shoes
{
    int seize;
    string brand;
    string colour;
};




int main() {

    vector<shoes> allShoes;
    shoes shoeOne;
    shoes shoeTemp;
    
    cout << "Add a shoe\n";
    cout << "Please insert the size: \n";
    cin >> shoeTemp.seize;
    // when you don't use cin.ignore() it skips the first string request
    cin.ignore();
    cout << "Please insert the colour: \n";
    getline(cin, shoeTemp.colour);
    
    cout << "Please insert the brand: \n";
    getline(cin, shoeTemp.brand);


    allShoes.push_back(shoeTemp);

    cout << allShoes[0].colour;
    
    


    return 0;

}





