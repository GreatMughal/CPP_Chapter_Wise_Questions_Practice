#include <iostream>

using namespace std;

int main(){
    int i = 1, j = 5;

    cout << "-----------------------------" << endl;
    cout << "\t a \t \t b" << endl;
    cout << "-----------------------------" << endl;

    while(i<=5){
        cout << " \t " << i << " \t  \t " << j << endl;
        ++i;
        --j;
    }

    return 0;
}