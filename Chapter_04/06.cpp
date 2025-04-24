#include <iostream>

using namespace std;

int main(){
    float number, square, cube;

    cout << "Enter a number: ";
    cin >> number;

    square = number * number;
    cube = number * number * number;

    cout << "The number you entered is: " << number << endl;
    cout << "The square is: " << square << endl;
    cout << "The cube is: " << cube << endl;
    return 0;
}