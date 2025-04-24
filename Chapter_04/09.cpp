#include <iostream>

using namespace std;

int main (){
    int totalStudents, feePerStudent, totalfeeForCompleteClass;

    cout << "Enter number of students in class: ";
    cin >> totalStudents;
    cout << "Enter fee per student: ";
    cin >> feePerStudent;

    totalfeeForCompleteClass = totalStudents * feePerStudent;

    cout << "For Complete class the colective fee is: " << totalfeeForCompleteClass << endl;
    return 0;
}