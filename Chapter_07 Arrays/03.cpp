#include <iostream>

using namespace std;

int main(){
    int size = 10;
    int numbers[size];
    int squares[size];
    int cubes[size];
    int sums[size];
    int total = 0;

    for(int i = 0; i < 10; i++){
        numbers[i] = i;
        // cout << numbers[i] << "\t";
        squares[i] = i*i;
        // cout << squares[i] << "\t";
        cubes[i] = i*i*i;
        // cout << cubes[i] << "\t";
        sums[i] = numbers[i] + squares[i] + cubes[i];
        // cout << sums[i] << "\t";
    }

    for(int j = 0; j < size; j++){
        cout << sums[j] << " ";
        total = total + sums[j];
    }
    cout << endl;
    cout << endl;
    cout << "Total of sum array is: " << total << endl;

    return 0;
}