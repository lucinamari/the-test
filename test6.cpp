#include <iostream>
#include <string>
using namespace std;
int main() {
    double ticketPrice, height, totalPrice;
    string type;
    cout << "Enter Ticket Price : ";
    cin >> ticketPrice;
    cout << "Enter Height : ";
    cin >> height;
    if (height > 150) {
        type = "adult";
        totalPrice = ticketPrice;
    }
    else {
        type = "kid";
        totalPrice = ticketPrice / 2;
    }
    cout << "You are " << type << "." << endl;
    cout << "Total Price : " << totalPrice << endl;
    return 0;
}
