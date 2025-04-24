#include <iostream>

using namespace std;

int main (){
    int n, a, b;
    cout << "Enter a three digit no. number: ";
    cin >> n;

    a = n / 100;
    n = n % 100;
    b = n / 10;
    n = n % 10;

    cout << a << endl;
    cout << b << endl;
    cout << n << endl;

    return 0;
}