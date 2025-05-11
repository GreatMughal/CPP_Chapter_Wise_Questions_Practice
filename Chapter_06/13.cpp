#include <iostream>

using namespace std;

int main(){

    int n = 4, num = 1;

    for(int i = 0; i <= n; i++){
        // spaces

        for(int j = 4; j > i; j--){
            cout << "p ";
        }

        for(int k = 1; k <= 9; k = k + 2){
            cout << "* " << k << endl;
        }

        cout << endl;
    }

    return 0;
}