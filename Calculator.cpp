#include <bits/stdc++.h>
using namespace std;

void substraction(double firstNum, double SecondNum){
    
    double result = firstNum - SecondNum;
    cout<<"Your Result: "<<result<<endl;
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
