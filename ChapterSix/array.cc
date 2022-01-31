#include <iostream>

using namespace std;

int main() {
    // in cpluslpus not initialized objects in an array are zero
    
    double drunk[6] = {0.0};
    cout << (sizeof(drunk)/sizeof(double)) << '\n';


    // New way to loop through arrays
    int a[7] = {0,1,2,3,4,5,6};

    for(auto &d : a) {

        printf("%d\n", a[d]);

    }


}