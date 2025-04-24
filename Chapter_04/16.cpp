#include <iostream>
#include <math.h>

using namespace std;

int main (){
    int a, b, c, d, n, sum;
    cout << "Enter a 5 digit number. ";
    cin >> n;
    a = n / 10000;
    n = n % 10000;
    b = n / 1000;
    n = n % 1000;
    c = n / 100;
    n = n % 100;
    d = n / 10;
    n = n % 10;
    sum = a + b + c + d +n;

    cout << "The sum is : " << sum << endl;
    return 0;
}