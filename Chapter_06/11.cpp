#include <iostream>

using namespace std;

int main(){
    int m = 1, n = 0;

    while(m <= 5){
        n = 1;
        while(n<=5){
            cout << "\t" << m*n;
            n++;
        }
        cout << endl;
        m++;
    }

    return 0;
}