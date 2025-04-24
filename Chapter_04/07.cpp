#include <iostream>

using namespace std;

int main() {
    int totalPages, pagesReadOneDay, numberOfDaysBookRead, remainingPages, totalReadPages;

    cout << "Enter Total pages of book: ";
    cin >> totalPages;
    cout << "How many pages you read in one day ? ";
    cin >> pagesReadOneDay;
    cout << "How many days you read the book ? ";
    cin >> numberOfDaysBookRead;

    totalReadPages = pagesReadOneDay * numberOfDaysBookRead;
    remainingPages = totalPages - totalReadPages;

    cout << "The " << remainingPages << " pages are left to complete the book.";
    return 0;
}