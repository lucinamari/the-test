#include <iostream>
using namespace std;
int main() {
    int binary, original;
    cout << "Enter binary number : ";
    cin >> binary;
    original = binary;
    int decimal = 0;
    int base = 1;
    while (binary > 0) {
        int last_digit = binary % 10;
        binary = binary / 10;
        decimal += last_digit * base;
        base = base * 2;
    }
    cout << "Decimal value of " << original << " = " << decimal << endl;
    return 0;
}
