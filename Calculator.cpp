#include <bits/stdc++.h>
using namespace std;


void substraction(int firstNum, int SecondNum){
    
    int result = firstNum - SecondNum;
    cout<<"Your Result: "<<result<<endl;
}



int division(int dividend, int divisor) {
    if (divisor != 0) {
        return dividend / divisor; 
    } else {
        std::cerr << "Error: Division by zero!" << std::endl;
        return 0; 
    }
}
int summation (int firstNumber, int secondNumber){
    return firstNumber + secondNumber;
}


void multiplication (double multiplicant, double multiplier){
    cout << "Your Result: " << multiplicant * multiplier << endl;
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
