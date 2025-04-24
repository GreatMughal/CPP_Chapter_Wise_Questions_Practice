#include <iostream>

using namespace std;

int main(){

    float side, base, height;
    char status;

    cout << endl;
    cout << endl;tt

    cout << "Calculate square \t \t [ s ] or [ S ]." << endl;
    cout << "Calculate triangle \t \t [ t ] or [ T ]." << endl;

    cout << endl;
    cout << endl;
    cout << "Enter status: ";
    cin >> status;

    if((status == 's') || (status == 'S')){
        cout << "Enter side of square: ";
        cin >> side;

        float area = side * side;

        cout << "The value of square is: " << area << endl;

    }else if((status == 't') || (status == 'T')){
        cout << "Enter base of triangle: ";
        cin >> base;
        cout << "Enter height of triangle: ";
        cin >> height;

        float area = (1 * base * height)/2;

        cout << "The value of Triangle is: " << area << endl;

    }else{
        cout << "Invalid status you enter.";
    }
    return 0;
}