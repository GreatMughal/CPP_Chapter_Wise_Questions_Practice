#include <iostream>

using namespace std;

int main (){
    float petrolInLiters, carCanTravel;

    cout << "How much liters you have the petrol ? ";
    cin >> petrolInLiters;

    carCanTravel = 3.5 * petrolInLiters;

    cout << "Your car can travel " << carCanTravel << " miles in " << petrolInLiters << " liters.";

    return 0;
}