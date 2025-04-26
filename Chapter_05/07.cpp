#include <iostream>

using namespace std;

int main(){

    char alphabet;

    cout << endl;
    cout << "[ A or a ] for Adventure movies." << endl;
    cout << "[ C or c ] for Comedy movies." << endl;
    cout << "[ F or f ] for Family movies." << endl;
    cout << "[ H or h ] for Horror movies." << endl;
    cout << "[ S or s ] for Science movies." << endl;
    cout << endl;
    cout << "Enter character: ";
    cin >> alphabet;

    switch(alphabet){
        case 'A' :
        case 'a' :
            cout << "Adventure Movies." << endl;
            break;
        case 'C' :
        case 'c' :
            cout << "Comedy Movies." << endl;
            break;
        case 'F' :
        case 'f' :
            cout << "Family Movies." << endl;
            break;
        case 'H' :
        case 'h' :
            cout << "Horror Movies." << endl;
            break;
        case 'S' :
        case 's' :
            cout << "Science Movies." << endl;
            break;
        default:
            cout << "Invalid movie selected.";
    }

    return 0;
}