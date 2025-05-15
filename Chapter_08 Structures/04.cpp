#include <iostream>

using namespace std;

struct Book{
    int bookID, bookPrice;
    string bookName;
};

struct Order{
    int orderID;
    Book orderArr[5];
};

int main(){

    Order person1;

    person1.orderID = 1;
    for(int i = 0; i < 5; i++){
        person1.orderArr[i].bookID = i + 1;
        // cout << person1.orderArr[i].bookID << endl;
        cout << "Enter price of book " << i + 1 << " ";
        cin >> person1.orderArr[i].bookPrice;
        // cout << person1.orderArr[i].bookPrice << endl;
        cout << "Enter name of book " << i + 1 << " ";
        cin >> person1.orderArr[i].bookName;
        // cout << person1.orderArr[i].bookName << endl;
    }

    cout << endl;
    cout << "Order id" << person1.orderID << endl;
    for(int j = 0; j < 5; j++){
        cout << "\n Book Id "  << person1.orderArr[j].bookID << "\n Book Price " << person1.orderArr[j].bookPrice << "\n Book Name " << person1.orderArr[j].bookName << endl;
    }


    return 0;
}