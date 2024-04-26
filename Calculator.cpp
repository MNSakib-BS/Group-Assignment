#include <bits/stdc++.h>
using namespace std;


void substraction(double firstNum, double SecondNum){   
    double result = firstNum - SecondNum;
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

void summation (double firstNumber, double secondNumber){
    cout<< firstNumber + secondNumber << endl;
    return ;
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
