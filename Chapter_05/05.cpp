#include <iostream>

using namespace std;

int main(){

    float tempInFarn, tempInCel;
    char status;
    cout << "Temperature converter.";
    cout << endl;
    cout << endl;

    cout << "Convert to Fahrenheit \t \t [ f ] or [ F ]." << endl;
    cout << "Convert to Centegrade \t \t [ C ] or [ C ]." << endl;

    cout << endl;
    cout << endl;
    cout << "Enter status: ";
    cin >> status;

    if((status == 'f') || (status == 'F')){
        cout << "Enter temperature in centigrade to convert in fahrenheit: ";
        cin >> tempInCel;

        float temp = (9.0 * (tempInCel + 32))/5.0;

        cout << "Your answer in Fahrenheit is: " << temp << endl;

    }else if((status == 'c') || (status == 'C')){
        cout << "Enter temperature in Fahrenheit to convert in Centigrade: ";
        cin >> tempInFarn;

        float temp = ((tempInFarn - 32) * 5.0)/9.0;

        cout << "Your answer in Fahrenheit is: " << temp << endl;

    }else{
        cout << "Invalid choice.";
    }

    return 0;
}