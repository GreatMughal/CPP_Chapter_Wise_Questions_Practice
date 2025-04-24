#include <iostream>

using namespace std;

int main (){
    float length, width, height, volume;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter height: ";
    cin >> height;

    volume = length * height * width;

    cout << "The volume is: " << volume << endl;
    return 0;
}