#include <iostream>

using namespace std;

int main(){

    float i = 1.0, j = 4.0;

    do{
        i = i + 1/j;
        j = j+4;
    }while(j<=100);

    cout << "Result: " << i <<endl;

    return 0;
}