#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(){
    float tax, radius, area, credit, pay, pastdue, length, width, circle;
    string account_no;
    char status;
    if (status == 'S') tax = 0.20 * pay;
    else tax = 0.14 * pay;
    if (pastdue > 0) {
        cout << "Account number" << account_no << " is overdue";
        credit = 0;
    }
    else {
        credit = 1000.0;
    }
    if (circle) {
        cin >> radius;
        area = 3.14159 * radius * radius;
        cout << "Area of circle = " << area;
    }
    else {
    cin >> length >> width;
    area = length * width;
    cout << "Area of rectabgle = " << area;
    }
}