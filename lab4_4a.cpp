#include <iostream>
#include <string>
using namespace std;
int main(){
    int LeftOperand, RightOperand, Result;
    char Operator;
    cout << "Please enter a simple expression " << "(number operator number) :";
    cin >> LeftOperand >> Operator >> RightOperand;
    if (Operator == '+'){
        Result = LeftOperand + RightOperand;
    }
    else if (Operator == '-'){
        Result = LeftOperand - RightOperand;
    }
    else if (Operator == '*'){
        Result = LeftOperand * RightOperand;
    }
    else if (Operator == '/'){
        Result = LeftOperand / RightOperand;
    }
    else {
        cout << Operator << " is unrecognized operation" << endl;
        return(1);
    }
    /*
    switch (Operator) {
        case '+': Result = LeftOperand + RightOperand;
        break;
        case '-': Result = LeftOperand - RightOperand;
        break;
        case '*': Result = LeftOperand * RightOperand;
        break;
        case '/': Result = LeftOperand / RightOperand;
        break;
        default: cout << Operator << " is unrecognized operation." << endl;
        cout << endl;
        return (1);
    }
    */
    cout << LeftOperand << " " << Operator<< " ";
    cout << RightOperand << " = " << Result << endl;
    return (0);
}