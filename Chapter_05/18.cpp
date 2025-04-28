#include <iostream>

using namespace std;

int main(){

    float side1, side2, side3;

    cout << "Enter side 1 of triangle: ";
    cin >> side1;
    cout << "Enter side 2 of triangle: ";
    cin >> side2;
    cout << "Enter side 3 of triangle: ";
    cin >> side3;

    if(side1 == side2 && side2 == side3){
        cout << "It is Equilateral Triangle." << endl;
    }else if(side1 == side2 || side2 == side3 || side1 == side3){
        cout << "It is Isosceles Triangle." << endl;
    }else{
        cout << "It is Scalene Triangle." << endl;
    }

    return 0;
}