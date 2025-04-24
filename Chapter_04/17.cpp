#include <iostream>
#include <math.h>

using namespace std;

int main (){
    float basicSalery, dearnessAllowence, houseRent;
    cout << "Enter your salery: ";
    cin >> basicSalery;

    dearnessAllowence = (basicSalery * 25) / 100;

    houseRent = (dearnessAllowence * 35) / 100;

    cout << "Your Salery is: " << basicSalery << endl;
    cout << "Your Remaining Salery after Dearness Allowence is: " << dearnessAllowence << endl;
    cout << "And After house rent your salery becomes: " << houseRent << endl;
    return 0;
}