#include <iostream>
using namespace std;
int main() {
    int A, B;
    cout << "Enter value A and B:";
    cin >> A >> B;
    if (A == B) cout << A << " = " << B << endl;
    if (A > B) cout << A << " > " << B << endl;
    if (A < B) cout << A << " < " << B << endl;
    return (0);
}