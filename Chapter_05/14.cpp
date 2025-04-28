#include <iostream>
#include <math.h>

using namespace std;

int main(){

float a, b, c, minValue;

cout << "Enter first qoutient value of quadretic equation: ";
cin >> a;
cout << "Enter second qoutient value of quadretic equation: ";
cin >> b;
cout << "Enter third qoutient value of quadretic equation: ";
cin >> c;

cout << endl;
cout << endl;

minValue = (b*b) - (4*a*c);

if(minValue == 0){
    float result = -b/(2*a);

    cout << "The result is: " << result << endl;
}else if(minValue < 0){
    cout << "Solution not possible." << endl;
}else{
    float result1, result2;

    result1 = (-b+sqrt(minValue))/(2*a);
    result2 = (-b-sqrt(minValue))/(2*a);

    cout << "You have two solutions which are: " << endl;

    cout << "Result one is: " << result1 << endl;
    cout << "Result two is: " << result2 << endl;

}

return 0;
}