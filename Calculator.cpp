#include <bits/stdc++.h>
using namespace std;


void substraction(int firstNum, int SecondNum){
    
    int result = firstNum - SecondNum;
    cout<<"Your Result: "<<result<<endl;
}



void division(double dividend, double divisor) {
    if (divisor != 0) {
        double result = dividend / divisor;
        cout<< "Your Result: "<< result<<endl; 
    } else {
        cout << "Error: Division by zero!" << endl;
    }
}

int summation (int firstNumber, int secondNumber){
    return firstNumber + secondNumber;
}


int multiplication (int multiplicant, int multiplier){
    return multiplicant * multiplier;
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
