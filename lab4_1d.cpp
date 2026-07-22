#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    float x1, y1, x2, y2, DE, DT;
    cout << "Enter start point x1 y1: ";
    cin >> x1 >> x1;
    cout << "Enter end point x2 y2: ";
    cin >> x2 >> y2;
    DT = abs(x1 - x2) + abs(y1 - y2);
    DE = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    cout << "Taxicab geometry: " << DT << endl;
    cout << "Euclidean geometry: " << DE << endl;
    return 0;
}