#include <iostream>

using namespace std;

int main(){

    int number;

    cout << "Enter a number from 1 to 5. I will show you disk drive manufacture: ";
    cin >> number;

    switch(number){
        case 1 :
            cout << "Western Digital." << endl;
            break;
        case 2 :
            cout << "3M corporation." << endl;
            break;
        case 3 :
            cout << "Maxell Corporation." << endl;
            break;
        case 4 :
            cout << "Sony Corporation." << endl;
            break;
        case 5 :
            cout << "Vaerbatim Corporation." << endl;
            break;
        default:
            cout << "Invalid number entered" << endl;
            break;
    }

    return 0;
}