#include <iostream>

using namespace std;

int main(){

    int salery;
    float tax, remainSalery;

    cout << "Enter your salery to detuct income tax: ";
    cin >> salery;

    if(salery > 30000){
        tax = (salery * 20)/100;
        remainSalery = salery - tax;
    }else if(salery > 20000){
        tax = (salery * 15)/100;
        remainSalery = salery - tax;
    }else{
        tax = (salery * 10)/100;
        remainSalery = salery - tax;
    }

    cout << "Your salery is " << salery << " and tax is " << tax << " and salery after deduction is " << remainSalery << endl;

return 0;
}