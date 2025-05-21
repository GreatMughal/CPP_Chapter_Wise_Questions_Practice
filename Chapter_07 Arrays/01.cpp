#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int count = 0;

    cout << "Enter 10 integers:\n";
    for (int i = 0; i < 10; ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < 10; ++i) {
        int n = arr[i];
        bool isPrime = true;

        if (n <= 1) {
            isPrime = false;
        } else {
            for (int j = 2; j * j <= n; ++j) {
                if (n % j == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime) {
            count++;
        }
    }

    cout << "Total number of prime numbers in the array: " << count << endl;

    return 0;
}
