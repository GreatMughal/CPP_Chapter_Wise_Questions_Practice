#include <iostream>

using namespace std;

struct Taxes{
    int income, taxRate, taxOfPerson = 4000; 
};

int main(){
    Taxes myarr[5];
    int payableTax;

    for(int i = 0; i < 5; i++){
        cout << "Enter income: ";
        cin >> myarr[i].income;

        cout << "Enter tax rate: ";
        cin >> myarr[i].taxRate;

        payableTax = (myarr[i].income * myarr[i].taxRate) / 100;

        cout << "The payable tax of person " << i << " is " << payableTax << endl;

    }


    return 0;
}