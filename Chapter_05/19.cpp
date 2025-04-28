#include <iostream>

#define PI 3.14
using namespace std;

int main(){

    char typeArea;
    float rectside1, rectside2, radiusCircle, baseTri, heightTri, result;

    cout << "Calculate areas." << endl;
    cout << endl;
    cout << "[T or t] \t triangle" << endl;
    cout << "[C or c] \t circle" << endl;
    cout << "[R or r] \t rectangle" << endl;
    cout << endl;

    cout << "Enter type of area: ";
    cin >> typeArea;

    switch(typeArea){
        case 'T':
        case 't':
            cout << "Enter base of tri angle: ";
            cin >> baseTri;
            cout << "Enter height of tri angle: ";
            cin >> heightTri;
            result = (1 * baseTri * heightTri) / 2;
            cout << "The area is " << result << endl;
            break;
        case 'C':
        case 'c':
            cout << "Enter raduis of circle: ";
            cin >> radiusCircle;
            result =  PI*radiusCircle*radiusCircle;
            cout << "The area is " << result << endl;
            break;
        case 'R':
        case 'r':
            cout << "Enter side1 of rectangle: ";
            cin >> rectside1;
            cout << "Enter side2 of rectangle: ";
            cin >> rectside2;
            result =  rectside1 * rectside2;
            cout << "The area is " << result << endl;
            break;
        default:
            cout << "Invalid type.";
    }

    return 0;
}