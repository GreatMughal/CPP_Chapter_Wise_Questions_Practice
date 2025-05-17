#include <iostream>

using namespace std;

int main(){

    int size = 3;
    string customer[size];
    int mango[size];
    int orange[size];
    int banana[size];
    int priceOfMango = 20;
    int priceOfOrange = 10;
    int priceOfBanana = 5;
    int TotalBill = 0;

    for(int i = 0; i < size; i++){
        cout << endl;
        cout << "Enter customer name: ";
        cin >> customer[i];
        cout << "Enter how many mangoos you purchased: ";
        cin >> mango[i];
        cout << "Enter how many oranges you purchased: ";
        cin >> orange[i];
        cout << "Enter how many bananas you purchased: ";
        cin >> banana[i];

        TotalBill = (mango[i] * priceOfMango) + (orange[i] * priceOfOrange) + (banana[i] * priceOfBanana);
        cout << endl;
        cout << "-----------------------------------------------------------------------------------------------------------" << endl;
        cout << "Customer Name. \t Mangoos. \t Oranges. \t Bananas. \t Total Bill." << endl;
        cout << "-----------------------------------------------------------------------------------------------------------" << endl;
        cout << customer[i] << "\t \t    " << mango[i] << "\t \t" << orange[i] << "\t \t" << banana[i] << "\t \t" << TotalBill << endl;
    }

    for(int j = 0; j < size; j++){
        
    }

    return 0;
}