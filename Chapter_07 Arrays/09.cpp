#include <iostream>

using namespace std;

int main(){

    int scoreOfStudent[5][5] = {{10,20,30,40,50},{60,70,80,90,100},{10,20,30,40,50},{60,70,80,90,100},{10,20,30,40,50},};
    
    int rowNo, studentNo;
    cout << "Enter Your Row Number: ";
    cin >> rowNo;
    cout << "Enter Your Student Number: ";
    cin >> studentNo;
    studentNo = studentNo - 1;
    rowNo = rowNo - 1;
    cout << "Your Score is " << scoreOfStudent[rowNo][studentNo] << endl;
    

    return 0;
}