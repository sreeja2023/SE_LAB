#include <iostream>
using namespace std;

string classifyAircraft(double wingspan) {
    return (wingspan > 30) ? "Passenger Flight" : (wingspan > 15) ? "Army Flight" : "UAV";
}

int main() {
    double wingspan;
    cout<<"hello";
    cout << "Enter wingspan (m): ";
    cin >> wingspan;
    cout << "Aircraft Type: " << classifyAircraft(wingspan) << endl;
    return 0;
}
