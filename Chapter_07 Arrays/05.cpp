#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int numbers[SIZE];
    int count[SIZE] = {0};

    // Input 10 integers
    cout << "Enter 10 integers:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> numbers[i];
    }

    // Count occurrences
    for (int i = 0; i < SIZE; ++i) {
        if (count[i] == -1) continue;  // Skip already counted
        int freq = 1;
        for (int j = i + 1; j < SIZE; ++j) {
            if (numbers[i] == numbers[j]) {
                freq++;
                count[j] = -1;  // Mark as counted
            }
        }
        count[i] = freq;
    }

    // Display results
    cout << "\nNumber of occurrences:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        if (count[i] != -1) {
            cout << numbers[i] << " occurs " << count[i] << " time(s)" << endl;
        }
    }

    return 0;
}
