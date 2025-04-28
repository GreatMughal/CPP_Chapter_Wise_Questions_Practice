#include <iostream>

using namespace std;

int main(){

    float subject1, subject2, subject3, sum, average;

    cout << "Enter first sunject marks: ";
    cin >> subject1;
    cout << "Enter second sunject marks: ";
    cin >> subject2;
    cout << "Enter third sunject marks: ";
    cin >> subject3;

    sum = subject1 + subject2 + subject3;

    average = sum / 3;
    cout << endl;
    cout << "Your collective marks are " << sum << endl;
    cout << "Your average marks are " << average << endl;
    cout << endl;

    if(subject1 > 40){
        cout << "You are Pass in first subject." << endl;
    }else{
        cout << "You are Fail in first subject." << endl;
    }
    if(subject2 > 40){
        cout << "You are Pass in second subject." << endl;
    }else{
        cout << "You are Fail in second subject." << endl;
    }
    if(subject3 > 40){
        cout << "You are Pass in third subject." << endl;
    }else{
        cout << "You are Fail in third subject." << endl;
    }

    




    return 0;
}