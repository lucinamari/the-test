#include <iostream>
#include <cmath>
using namespace std;
void fn1(){
    int digit, sum = 0;
    for(digit = 0; digit <= 9; ++digit){
        cout << digit << " ";
    }
    cout << endl;
    for(digit = 0; digit <= 9; digit++){
        cout << digit << " ";
    }
    cout << endl;
    for(int n = 10; n >= 1; n--){
        cout << n << " ";
        sum = sum + n;
    }
    cout << " = " << sum << endl;
}
int main(){
    fn1();
    return(0);
}
