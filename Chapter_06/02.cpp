#include <iostream>

using namespace std;

int main(){

    int i = 1, sum = 0;

    cout << "------------------------------------" << endl;
    cout << "\t num \t \t sum" << endl;
    cout << "------------------------------------" << endl;

    while(i<=5){

        sum = sum + i;

        cout << " \t " << i << " \t \t " << sum << endl;

        ++i;
    }

    return 0;
}