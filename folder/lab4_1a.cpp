#include <iostream>
using namespace std;
int main (){
    string first_name;
    string* address = &first_name;
    cout << "Enter your first name: ";
    cin >> first_name;
    cout << "Please enter your firstname:";
    cout << "Hello, "<< first_name << "\n";
    cout << "Stored at address: "<< &first_name << "\n" << endl;
    cout << "Value from address: " << address << "\n" << endl;
    return(0);
}  