#include <iostream>

using namespace std;

int main(){

    int number, a = 0, b = 1, next = 0;

    cout << "Enter a number we will show the fibinacii series: ";
    cin >> number;

    cout << a << "\t";
    cout << b;
    next = a + b;

    for(int i = 1; i <= number; i++){
        cout << "\t" << next;
        a = b;
        b = next;
        next = a + b;
    }

    

    return 0;
}