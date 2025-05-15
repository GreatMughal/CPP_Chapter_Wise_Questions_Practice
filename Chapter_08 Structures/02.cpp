#include <iostream>

using namespace std;

struct EmployeeDetails{
    int codeNumber, salery;
    char grade;
};

int main(){

    EmployeeDetails employee1, employee2;

    cout << "Enter employee records." << endl;
    cout << endl;

    cout << "Enter employee 1 code Number: ";
    cin >> employee1.codeNumber;

    cout << "Enter employee 1 salery: ";
    cin >> employee1.salery;

    cout << "Enter employee 1 grade: ";
    cin >> employee1.grade;

    cout << "Enter employee 2 code Number: ";
    cin >> employee2.codeNumber;

    cout << "Enter employee 2 salery: ";
    cin >> employee2.salery;

    cout << "Enter employee 2 grade: ";
    cin >> employee2.grade;

    if(employee1.salery > employee2.salery){
        cout << "Details of employee 1 are given." << endl;
        cout << endl;
        cout << "Code Number is: " << employee1.codeNumber << endl;
        cout << "Salery is: " << employee1.salery << endl;
        cout << "Grade is: " << employee1.grade << endl;

    }else{
        cout << "Details of employee 2 are given." << endl;
        cout << endl;
        cout << "Code Number is: " << employee2.codeNumber << endl;
        cout << "Salery is: " << employee2.salery << endl;
        cout << "Grade is: " << employee2.grade << endl;
        
    }



    return 0;
}