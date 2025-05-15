#include <iostream>

using namespace std;

struct PlayerDetails{
    float distance;
    int minutes, seconds;
};

int main(){
    PlayerDetails player1, player2;

    cout << "Enter player details.";
    cout << endl;

    cout << "Enter distance covered by player 1: ";
    cin >> player1.distance;
    cout << "Enter minutes taken by player 1: ";
    cin >> player1.minutes;
    cout << "Enter seconds taken by player 1: ";
    cin >> player1.seconds;
    cout << endl;
    cout << "Enter distance covered by player 2: ";
    cin >> player2.distance;
    cout << "Enter minutes taken by player 2: ";
    cin >> player2.minutes;
    cout << "Enter seconds taken by player 2: ";
    cin >> player2.seconds;

    cout << endl;
    cout << "Player 1 entries are given below." << endl;
    cout << endl;
    cout << "Distance: " << player1.distance << endl;
    cout << "Minutes: " << player1.minutes << endl;
    cout << "Seconds: " << player1.seconds << endl;
    cout << endl;
    cout << "Player 2 entries are given below." << endl;
    cout << endl;
    cout << "Distance: " << player2.distance << endl;
    cout << "Minutes: " << player2.minutes << endl;
    cout << "Seconds: " << player2.seconds << endl;



    return 0;
}