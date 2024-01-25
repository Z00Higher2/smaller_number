/*
Author: Zuhayer Tashin
Course: CSCI-136
Instructor: their name
Assignment: Lab1A

Write a program smaller.cpp that asks the user to input two integer numbers and prints out the smaller of the two.
*/

#include <iostream>
using namespace std;

int main(){
    int num1; //First Number
    cout << "Enter the First Number: ";
    cin >> num1;
    int num2; //Second Number
    cout << "Enter the Second Number: ";
    cin >> num2;

    cout << "The smaller of the two is " << min(num1, num2) << endl; //prints out the smaller number between the two numbers

    return 0;
}