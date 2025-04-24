#include <iostream>

using namespace std;

int main (){
    const float PI = 3.14;
    float radius, area, circumference;

    cout << "Enter Radius Of Sphere: ";
    cin >> radius;

    area = 4 * PI * radius * radius;
    circumference = (4 * PI * radius * radius * radius)/3;

    cout << "The area of sphere is: " << area << endl;
    cout << "The volume of sphere is: " << circumference << endl;
    return 0;
}

