//
//  main.cpp
//  calculatorTest
//
//  Created by Melinda Fernandes on 26/02/2017.
//  Copyright © 2017 Melinda Fernandes. All rights reserved.
//
// a simple calculator program

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cmath>

// function declaration
void askForInput();
int performCalculation(int,char,int);


int main() {
    
    askForInput();
    return 0;
}

void askForInput(){
    //initialise variables
    int firstInteger = 0;
    int secondInteger = 0;
    char op;
    
    //  ask user to input calculation separated by space
    cout << "Calculate: (press any other key to quit) " << endl;
    
    // assign results to variable names
    cin >> firstInteger >> op >> secondInteger;
    
    // if the three input variables are true, continue with calculation
    // else quit
    if (firstInteger && op && secondInteger){
        
        cout << "Result: " << performCalculation(firstInteger,op,secondInteger) << endl;
        
        askForInput(); // call function again
    } else {
        return;
    }
    
}//end function

int performCalculation(int first, char op, int second){
    switch(op) {
        case '+':
            return (first + second);
        case '-':
            return (first - second);
        case '*':
            return (first * second);
        case '/':
            return (first / second);
        default:
            return 0;
    }// end switch statement
}


//    float start = clock();
//
//    float end = clock();
//    cout << "time taken is " << end - start << endl;