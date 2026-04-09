#include<bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

// data: 8-4-2026
// Written by: Dev patel
// there will be no updation on this basic CLI calculator
int main(){
    fast;
    // here i implimented a simple calculator that can perform basic arithmetifc operations
    cout << "Hello User thanks for using my first ever CLI " << "\n";
    cout << "You can type to use the calculator" << "\n";
    cout << "Commands: add, subtract, multiply, divide, exit" << "\n";
    cout << "Please enter exit to stop the calculator" << "\n";
    while(true){
        // CLI input 
        string cmd;
        cin >> cmd;
        if(cmd == "exit") break;
        double number1, number2;
        // here the command for addition
        if(cmd == "add"){
            cin >> number1 >> number2;
            cout << number1 + number2 << "\n";
        }
        // here the command for subtraction
        else if(cmd == "subtract"){
            cin >> number1 >> number2;
            cout << number1 - number2 << "\n";
        }
        // here the command for multiplication
        else if(cmd == "multiply"){
            cin >> number1 >> number2;
            cout << number1 * number2 << "\n";
        }
        // here the command for division
        else if(cmd == "divide"){
            cin >> number1 >> number2;
            if(number2 == 0){
                cout << "Error: Division by zero" << "\n";
            } else {
                cout << number1 / number2 << "\n";
            }
        }
        // if the user enters invalid command 
        // we will give the message of invalid command
        else{
            cout << "Invalid command" << "\n";
        }
    }
    return 0;
}