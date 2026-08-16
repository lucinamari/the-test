#include <iostream>
#include <string>
using namespace std;
int main(){
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    cout << endl;
    if (ch >= 'a' && ch <= 'z') {
        cout << int(ch) << ch << " is lower character.";
    }
    else if (ch >= 'A' && ch <= 'Z') {
        cout << int(ch) << ch << "is upper character." << endl;
    }
    else if (ch >= '0' && ch <= '9') {
        cout << int(ch) << ch << " is numeric." << endl;
    }
    else cout << int(ch) << ch << " is special character." << endl;
    return(0);
}