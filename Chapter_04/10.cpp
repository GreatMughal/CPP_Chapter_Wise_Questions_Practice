#include <iostream>

using namespace std;

int main (){
    float tempInForemheit, tempInCelcius;
    cout << "Enter temperature in Forenheit: ";
    cin >> tempInForemheit;

    tempInCelcius = (5 * (tempInForemheit - 32)) / 9;

    cout << "Temperature in celcius is: " << tempInCelcius << endl;
    return 0;
}