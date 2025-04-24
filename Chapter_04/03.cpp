#include <iostream>
#include <math.h>
using namespace std;
int main(){

    float sideA, sideB, sideC, area, s;

    cout << "Enter the value of side A: ";
    cin >> sideA;
    cout << "Enter the value of side B: ";
    cin >> sideB;
    cout << "Enter the value of side C: ";
    cin >> sideC;

    s = (sideA + sideB + sideC) / 2;
    area = sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
    cout << "The area of triangle is: " << area << endl;
    return 0;
}