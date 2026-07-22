#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float a, b, x, y, balance, xmid, ymid;
    char status;
    if (x < 0.0){
        cout << x;
    }
    if (x <= 3.0){
        y = 3 * sqrt(x);
        cout << y << endl;
    }
    if ((balance < 1000.0) || (status == 'R')){
        cout << balance << endl;
    }
    if ((a >= 0) && (b <= 5)) {
        xmid = (a + b ) /2;
        ymid = sqrt(xmid);
    }
}