#include <iostream>

using namespace std;

int main(){

    char vehical;
    int days;

    cout << endl;
    cout << "Menu of Parking area. " << endl;
    cout << endl;
    cout << "M \t Motorcycle" << endl;
    cout << "C \t Car" << endl;
    cout << "B \t Bus" << endl;
    cout << endl;

    cout << "Enter which type of vehical you want to park e.g. M ";
    cin >> vehical;
    cout << "How many days you want to park ";
    cin >> days;
    
    switch(vehical){
        case 'M':
        case 'm':
            cout << "Motorcycle Rs. 10 per day" << endl;
            break;
        case 'C':
        case 'c':
            cout << "Car Rs. 20 per day" << endl;
            break;
        case 'B':
        case 'b':
            cout << "Bus Rs. 30 per day" << endl;
            break;
        default:
            cout << "Invaid Selected." << endl;
    }



return 0;
}