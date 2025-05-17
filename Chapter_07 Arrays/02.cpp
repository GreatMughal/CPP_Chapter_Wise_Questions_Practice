#include <iostream>

using namespace std;

int main(){

    int rollNo[5];
    int marks[5];
    int highest = 0;
    int index;
    int stRoll = 0;
    // take inpputs from users

    for(int i = 0; i < 5; i++){
        cout << "Enter roll no: ";
        cin >> rollNo[i];
        cout << "Enter marks: ";
        cin >> marks[i];

        if(marks[i] > marks[i+1]){
            highest = marks[i];
            index = i;
        }
    }
    stRoll = rollNo[index];
    cout << "Highest marks are: " << highest << " with roll no. " << stRoll << endl;



    return 0;
}