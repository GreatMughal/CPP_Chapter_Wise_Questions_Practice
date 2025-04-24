#include <iostream>

using namespace std;

int main(){

    float miles, kilometers;

    cout << "Enter value in miles: ";
    cin >> miles;
    kilometers = 1.609 * miles;

    cout << "Your answer in kilometers is: " << kilometers << endl;

    return 0;
}