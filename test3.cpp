#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter number : ";
    cin >> num;
    int d1 = num / 1000;
    int d2 = (num / 100) % 10;
    int d3 = (num / 10) % 10;
    int d4 = num % 10;
    cout << d1 << "   " << d2 << "   " << d3 << "   " << d4 << endl;
    return 0;
}
