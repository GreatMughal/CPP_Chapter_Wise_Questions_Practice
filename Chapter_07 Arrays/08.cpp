#include <iostream>

using namespace std;

int main(){
    int size = 10;
    float myArr[10];
    float average = 0;
    float sum = 0;

    for(int i = 0; i < size; i++){
        cout << "Enter " << i+1 << " floating number: ";
        cin >> myArr[i];

        sum = sum + myArr[i];
    }
    average = sum / size;

    cout << endl;
    cout << "Highest Numbers are: " << endl;
    for(int j = 0; j < size; j++){
        if(myArr[j] > average){
            cout << myArr[j] << "\t";
        }
    }



    return 0;
}