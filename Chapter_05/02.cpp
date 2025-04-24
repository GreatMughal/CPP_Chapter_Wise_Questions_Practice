#include <iostream>

using namespace std;

int main(){

    int seniorPersonSalery = 400, juniorPersonSalery = 275;
    char status;

    cout << "Enter a status only s or j: ";
    cin >> status;

    if((status == 'S') || (status == 's')){
        cout << "You are senior and your salery is " << seniorPersonSalery << endl;
    }else if((status == 'J') || (status == 'j')){
        cout << "You are junior and your salery is " << juniorPersonSalery << endl;
    }else{
        cout << "Invalid status." << endl;
    }

    return 0;
}