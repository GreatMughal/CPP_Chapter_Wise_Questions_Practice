#include <iostream>

using namespace std;

int main(){

    int number;
    float inch, gallon, litter, centimeter, kilometer, kilogram, mile, pound, result;

    cout << endl;
    cout << "[ 1 ] \t Convert Inches  to Centimeters " << endl;
    cout << "[ 2 ] \t Convert Gallon to Litters " << endl;
    cout << "[ 3 ] \t Convert Miles to Kilometers " << endl;
    cout << "[ 4 ] \t Convert Pound to Kilograms " << endl;
    cout << "[ 5 ] \t Convert Centimeters to Inches " << endl;
    cout << "[ 6 ] \t Convert Litters to Gallon " << endl;
    cout << "[ 7 ] \t Convert Kilometers to Miles " << endl;
    cout << "[ 8 ] \t Convert Kilograms to Pounds " << endl;
    cout << endl;
    cout << "Enter code to convert: ";
    cin >> number;

    switch(number){
        case 1:
            cout << "Enter value in inches: ";
            cin >> inch;

            result = inch * 2.54;

            cout << "The result is: " << result << " cm";
            break;
        case 2:
            cout << "Enter value in gallon: ";
            cin >> gallon;

            result = gallon * 3.785;

            cout << "The result is: " << result << " liters";
            break;
        case 3:
            cout << "Enter value in miles: ";
            cin >> mile;

            result = mile * 1.609;

            cout << "The result is: " << result << " KM";
            break;
        case 4:
            cout << "Enter value in pounds: ";
            cin >> pound;

            result = pound * 0.4536;

            cout << "The result is: " << result << " KG";
            break;
        case 5:
            cout << "Enter value in centimeters: ";
            cin >> centimeter;

            result = centimeter / 2.54;

            cout << "The result is: " << result << " Inches";
            break;
        case 6:
            cout << "Enter value in litters: ";
            cin >> litter;

            result = litter / 3.785;

            cout << "The result is: " << result << " gallons";
            break;
        case 7:
            cout << "Enter value in kilometers: ";
            cin >> kilometer;

            result = kilometer / 1.609;

            cout << "The result is: " << result << " miles";
            break;
        case 8:
            cout << "Enter value in kilograms: ";
            cin >> kilogram;

            result = kilogram / 0.4536;

            cout << "The result is: " << result << " ponds";
            break;
        default:
            cout << "Invalid value entered.";
    }

    return 0;
}