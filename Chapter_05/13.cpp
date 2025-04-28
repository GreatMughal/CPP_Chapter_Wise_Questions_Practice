#include <iostream>

using namespace std;

int main(){
    int hours, minutes;
    string period = "AM";

    cout << "Enter time in [HH]:[TT] format: ";
    cin >> hours >> minutes;

    if(hours < 0 || hours > 23 || minutes < 0 || minutes > 59){
        cout << "Invalid Time." << endl;
        return 1;
    }

    if(hours == 0){
        hours = 12;
    }else if(hours == 12){
        period = "PM";
    }else if(hours > 12){
        hours -= 12;
        period = "PM";
    }

    cout << "Your time is " << hours << " : " << minutes << " " << period << endl;
}