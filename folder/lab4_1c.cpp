#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float a, b, c, ans;
    cout << "Enter the lengths of the two sides adjacent to the right angle" << endl;
    cout << "(a b): ";
    cin >> a >> b;
    ans = pow(2, a) + pow(2, b);
    c = pow(0.5, ans);
    cout << "Hypotenuse = " << (float)sqrt(ans) << endl;
    return(0);
}