#include <iostream>
#include <string>
using namespace std;
int main(){
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    switch(toupper(ch)){
        case 'R': cout << "RED" << endl;
        break;
        case 'W': cout << "WHITE" << endl;
        break;
        case 'B': cout << "BLUE" << endl;
        break;
        case 'G': cout << "GREEN" << endl;
        break;
        default: cout << "I don't know." << endl;
    }
    return(0);
}