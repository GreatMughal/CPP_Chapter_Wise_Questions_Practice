#include <iostream>
#include <math.h>

using namespace std;

int main (){
    float sub1, sub2, sub3, sub4, sub5, total, percentage;
    cout << "Enter first subject number: ";
    cin >> sub1; 
    cout << "Enter second subject number: ";
    cin >> sub2; 
    cout << "Enter third subject number: ";
    cin >> sub3; 
    cout << "Enter forth subject number: ";
    cin >> sub4; 
    cout << "Enter fifth subject number: ";
    cin >> sub5; 

    total = sub1 + sub2 + sub3 + sub4 + sub5;

    percentage = (total / 500) * 100;

    cout << "Your obtained number are: " << total << endl;
    cout << "Your percentage is: " << percentage << " %" << endl;
    return 0;
}