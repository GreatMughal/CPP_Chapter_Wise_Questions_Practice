#include <iostream>
#include <math.h>

using namespace std;

int main (){
    float x1, x2, y1, y2, distance;
    cout << "Enter x1: ";
    cin >> x1;
    cout << "Enter x2: ";
    cin >> x2;
    cout << "Enter y1: ";
    cin >> y1;
    cout << "Enter y2: ";
    cin >> y2;

    distance = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));

    cout << "The distance is: " << distance << endl;
    return 0;
}