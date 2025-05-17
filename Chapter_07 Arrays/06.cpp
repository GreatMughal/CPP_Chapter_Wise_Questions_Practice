#include <iostream>

using namespace std;

int main(){
    int size = 10;
    int marks[size];

    for(int i = 0; i < size; i++){
        cout << endl;
        cout << "Enter marks of " << i+1 << " student: ";
        cin >> marks[i];

        if(marks[i] >= 80){
            cout << endl;
            cout << "Your grade is A";
            cout << endl;
        }else if(marks[i] >= 60){
            cout << endl;
            cout << "Your grade is B";
            cout << endl;
        }else if(marks[i] >= 40){
            cout << endl;
            cout << "Your grade is C";
            cout << endl;
        }else{
            cout << endl;
            cout << "Your grade is F";
            cout << endl;
        }
    }

    return 0;
}