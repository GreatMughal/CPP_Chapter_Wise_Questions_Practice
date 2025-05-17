#include <iostream>

using namespace std;

int main(){

    int myArr[10];
    int count = 0;
    for(int i = 0; i < 10; i++){
        cout << "Enter integer: " << i + 1 << " ";
        cin >> myArr[i];
        if(myArr[i] % 2 != 0){
            count++;
        }
    }

    cout << "Total Number of primes are: " << count << endl;


    return 0;
}