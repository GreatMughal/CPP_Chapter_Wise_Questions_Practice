#include <iostream>

using namespace std;

int main(){
    float age, months, days;

    cout << "Enter age in years: ";
    cin >> age;

    months = age * 12;
    days = age * 12 * 365;

    cout << "Your are " << age << " years old." << endl;
    cout << "Your are " << months << " months old." << endl;
    cout << "Your are " << days << " days old." << endl;

    return 0;
}