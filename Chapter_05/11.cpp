#include <iostream>

using namespace std;

int main(){

    float obtainedMarks, totalMarks, percentage;

    totalMarks = 1100;

    cout << "Enter obtained marks: ";
    cin >> obtainedMarks;

    percentage = (obtainedMarks / totalMarks) * 100;

    if(percentage >= 80){
        cout << "Grade is A+" << endl;
    }else if(percentage > 70){
        cout << "Grade is A" << endl;
    }else if(percentage > 60){
        cout << "Grade is B" << endl;
    }else if(percentage > 50){
        cout << "Grade is C" << endl;
    }else if(percentage > 40){
        cout << "Grade is D" << endl;
    }else if(percentage > 33){
        cout << "Grade is E" << endl;
    }else{
        cout << "Grade is F" << endl;
    }

    return 0;
}