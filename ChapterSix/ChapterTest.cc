#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

    vector<string> chain(10);
    string word;

    do
    {
        cout << "Please insert a word: \n";
        getline(cin, word);
        if (word != "stop")
        {
            chain.push_back(word);
        }
        
    } while (word != "stop");
    

    
    for (size_t i = 0; i<chain.size(); i++ ) {

        cout << chain[i] << endl;
    }
    
    return 0;


}