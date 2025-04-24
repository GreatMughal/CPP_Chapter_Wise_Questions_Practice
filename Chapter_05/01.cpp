#include <iostream>

using namespace std;

int main(){
    char alphabet;

    cout << "Enter a character: ";
    cin >> alphabet;

    if((alphabet >='A') && (alphabet <= 'Z')){
        cout << "It is Uppercase.";
    }else if((alphabet >='a') && (alphabet <= 'z')){
        cout << "It is Lowercase.";
    }else{
        cout << "It is Invalid.";

    }



    return 0;
}