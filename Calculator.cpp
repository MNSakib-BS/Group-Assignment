#include <bits/stdc++.h>
using namespace std;

string numberClassifier (double number)
{
    
    string classifyResult="";
    if((int)number % 2 == 0){
        classifyResult+=" (Even; "; 
    }else {
        classifyResult+=" (Odd; "; 
    }
    if((int)number  >= 0){
        classifyResult+="Positive;) "; 
    }else {
        classifyResult+="Negative;) "; 
    }

    return classifyResult ;
}
void substraction(double firstNum, double SecondNum){   
    double result = firstNum - SecondNum;
    cout<<"Your Result: "<<result<<endl;
    cout<<numberClassifier(firstNum)<<" - "<<numberClassifier(SecondNum)<<" = "<<numberClassifier(result)<<endl;
}



void division(double dividend, double divisor) {

    double quotient;
    if (divisor != 0) {
        double quotient = dividend / divisor;
        cout<< "Your Result: "<< quotient<<endl;
        cout<<numberClassifier(dividend)<<"/"<<numberClassifier(divisor)<<"="<<numberClassifier(quotient)<<endl;

         
    } else {
        cout << "Error: Division by zero!" << endl;
        return;
    }
}

void summation (double firstNumber, double secondNumber){
    cout<< firstNumber + secondNumber << endl;
    cout<<numberClassifier(firstNumber)<<"+"<<numberClassifier(secondNumber)<<"="<<numberClassifier(firstNumber + secondNumber)<<endl;
    return ;
}


void multiplication (double multiplicant, double multiplier){
    cout << "Your Result: " << multiplicant * multiplier << endl;
    cout<<numberClassifier(multiplicant)<<"*"<<numberClassifier(multiplier)<<"=";
    cout<<numberClassifier(multiplicant * multiplier)<<endl;
}



int main() {
    cout << "Enter your math expression, e.g., 5 + 2" << endl;
    double firstNumber, secondNumber;
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
