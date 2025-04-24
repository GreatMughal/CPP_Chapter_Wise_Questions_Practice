#include <iostream>
#include <math.h>

using namespace std;

int main (){
    float angle, radius, length;

    cout << "Enter angle: ";
    cin >> angle;
    cout << "Enter radius: ";
    cin >> radius;

    length = angle * radius;
    cout << "The length of arc is : " << length << endl;
    return 0;
}