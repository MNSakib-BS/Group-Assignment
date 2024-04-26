#include <bits/stdc++.h>
using namespace std;

int division(int dividend, int divisor) {
    if (divisor != 0) {
        return dividend / divisor; 
    } else {
        std::cerr << "Error: Division by zero!" << std::endl;
        return 0; 
    }
}


int main() {
    cout << "Enter your math expression, e.g., 5 + 2" << endl;
    int firstNumber, secondNumber;
    char sign;
    cin >> firstNumber >> sign >> secondNumber;
    switch (sign) {
        case '+':
            summation(firstNumber, secondNumber);
            break;
        case '-':
            substraction(firstNumber, secondNumber);
            break;
        case '*':
            multiplication(firstNumber, secondNumber);
            break;
        case '/':
            division(firstNumber, secondNumber);
            break;
        default:
            cout << "Invalid operator!" << endl;
    }
    return 0;
}
