#include <iostream>

using namespace std;

int main(){
    int size = 10;
    string names[size];
    int saleries[size];

    for(int i = 0; i < size; i++){
        cout << "Enter " << i+1 << " person name: ";
        cin >> names[i];
        cout << "Enter salery of " << i+1 << " person: ";
        cin >> saleries[i];

        if(saleries[i] >= 250000){
            cout << endl;
            cout << "The name of the person is " << names[i] << endl;
            cout << "The salery of the " << i+1 << " person is " << saleries[i] << endl;
            cout << "Tax to be paid." << endl;
            cout << endl;
        }else{
            cout << endl;
            cout << "The name of the person is " << names[i] << endl;
            cout << "The salery of the " << i+1 << " person is " << saleries[i] << endl;
            cout << "No Tax." << endl;
            cout << endl;
        }
    }

    // if we want it imidiately response and give result we will place if condition block in the same loop
    // and if we want when i enter all values then it print it out or give result we will place if condition in another loop

    return 0;
}