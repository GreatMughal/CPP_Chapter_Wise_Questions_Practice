#include <iostream>

using namespace std;

int main(){

    int a, b, c;

    cout << "Enter a, b and c: ";
    cin >> a>>b>>c;

    if(a == 0){
        cout << "It is not a common divisor.." << endl;
    }
    
    else if((a%b == 0) && (a%c == 0)){
        cout << "It is a common divisor.." << endl;
    }else{

        cout << "It is not a common divisor.." << endl;
    }
    



    return 0;
}