#include <iostream>

using namespace std;

int main(){

    char question;
    int countA = 0, countB = 0, countC = 0, countD = 0;

    cout << "Enter options: " << "A, B, C, D" << endl;

    for(int i = 0; i<20; i++){
        cin >> question;

        switch(question){
            case 'A':
            case 'a':
                countA ++;
                break;
            case 'B':
            case 'b':
                countB ++;
                break;
            case 'C':
            case 'c':
                countC ++;
                break;
            case 'D':
            case 'd':
                countD ++;
                break;
            default:
                i--;
                break;
        }
    }

    cout << "Question 1 is " << countA << " times" << endl;
    cout << "Question 2 is " << countB << " times" << endl;
    cout << "Question 3 is " << countC << " times" << endl;
    cout << "Question 4 is " << countD << " times" << endl;

    return 0;
}