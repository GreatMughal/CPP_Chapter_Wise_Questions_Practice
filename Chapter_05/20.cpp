#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num == 0) {
        cout << "The number is even." << endl;
    } else if (num > 0) {
        if (num % 2 == 0) {
            cout << "The number is positive even." << endl;
        } else {
            cout << "The number is positive odd." << endl;
        }
    } else {
        if (num % 2 == 0) {
            cout << "The number is negative even." << endl;
        } else {
            cout << "The number is negative odd." << endl;
        }
    }

    return 0;
}
