#include <iostream>
using namespace std;
int main() {
    float Fahrenheit, Celsius;
    cout << "Enter F : ";
    cin >> Fahrenheit;
    Celsius = (5.0 / 9.0) * (Fahrenheit - 32);
    cout << "F to C = " << Celsius << endl;
    float backToF = (Celsius * 9.0 / 5.0) + 32;
    cout << "C to F = " << backToF << endl;
    return 0;
}