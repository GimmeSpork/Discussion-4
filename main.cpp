/******************************************************************************
# Author:           Lucy Price & Andy Joy
# Assignment:       Discussion 3 - Username Creation Program
# Date:             May 1, 2026
# Description:      This program will take two names and one four digit number
#                   and turn it into a username that is the first 5 digits
#                   of the last name, the first digit of the first name, and
#                   the last two digits of the four digit number.
# Input:            firstName, lastName as strings & fourDigits as int.
# Output:           loginName as string.
# Sources:          Discussion 4 resources, and zybooks chapter 4.
#******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

// Main function
int main() {

//Declare variables
string firstName = " ";
string lastName = " ";
string loginName = " ";
int fourDigits = 0;

//main function
//welcome message
cout << "Welcome to the Username Creation Program!" << endl;
cout << "\nEnter first name: ";
cin >> firstName;
cout << "Enter last name: ";
cin >> lastName;
cout << "Enter a 4 digit number: ";
cin >> fourDigits;

cout << "\nYou entered: " << firstName << " " << lastName << " " << fourDigits << endl;

//if else statement for length of lastname
if (lastName.length() >= 5) {
  loginName = lastName.substr(0, 5);
}
else {
  loginName = lastName;
}

loginName += firstName.at(0) + to_string(fourDigits % 100);

cout << "\nYour Username is: " << loginName << endl;

//goodbye statement
cout << "\nThank you for using the Username Creation Program!" << endl;


  return 0;
}
