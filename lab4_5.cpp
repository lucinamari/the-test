#include <iostream>
#include <cmath>
using namespace std;
int main(){
    char Choice;
    float Area;
    cout << "Program Calculate Area" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your number: ";
    cin >> Choice;
    cout << endl;
    if (Choice == '1'){
        float Radius;
        cout << "Enter radius: ";
        cin >> Radius;
        Area = 3.14159F * Radius * Radius;
        cout << "Area of Circle = " << Area << endl;
    }
    else if (Choice == '2'){
        float Length, Width;
        cout << "Enter length and width: ";
        cin >> Length >> Width;
        Area = Length * Width;
        cout << "Area of Rectangle = " << Area << endl;
    }
    else if (Choice == '3'){
        cout << "Exit Program..." << endl;
    }
    else {
        cout << "You choose out of range is not process." << endl;
    }
    return (0);
}