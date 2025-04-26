#include <iostream>

using namespace std;

int main(){

    float temperature;

    cout << "Enter temperature: ";
    cin >> temperature;

    if(temperature > 35.0){
        cout << "Hot Day." << endl;
    }else if(temperature > 25.0){
        cout << "Pleasent Day." << endl;
    }else{
        cout << "Cool Day." << endl;
    }

    return 0;
}