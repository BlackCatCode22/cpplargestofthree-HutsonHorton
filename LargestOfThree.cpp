// LargestOfThree.cpp
//
// Programmer's name: Hutson Horton
// Date: Aug 16, 2023
//
// Description of program:
//
// TODO: This program will get 3 integers from the user and compare them with if and nested if statements to find the largest of the three.
//
// This program will input...
//
//
// References:
//
// Getting started:
// https://www.w3schools.com/cpp/cpp_getstarted.asp
// User Input:
// https://www.w3schools.com/cpp/cpp_user_input.asp
// Strings:
// https://www.w3schools.com/cpp/cpp_strings.asp

#include <iostream>
using namespace std;

int main(){
  cout << "\n\n Welcome to the largest of Three Program\n\n";

// Get the user's name
  string userName = "";
  cout << "\n Please enter your name: ";
  cin >> userName;

//Welcome and explain the program to the user.
    cout << "\nWelcome to the LargestOfThree program, " << userName <<"! You will input three integers and the program will compare them and tell you \nwhich is the largest of the three!" << endl;


//Define Variables & Initialize Variables
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int largest = 0;

//Receive the 3 integers from the User
    cout << "\n Please input the first integer." << endl;
    cin >> num1;

    cout << "\nPlease input the second integer." << endl;
    cin >> num2;

    cout << "\nPlease input the second integer." << endl;
    cin >> num3;

// Test output and reiterate integers
    cout << "Your integers are " << num1 << "," << num2 << " and " << num3 << "." << endl;


//Processing -  Comparing w/ If Statements
if(num1 > num2)
{
    if(num1 > num3)
    {
        largest = num1;
    }
    else
    {
        largest = num3;
    }
}
else
{
    if(num2>num3)
    {
        largest = num2;
    }
    else{
        largest = num3;
    }

}



//Output the Largest Integer
cout << "\nThe largest integer out of "<< num1 << ", " << num2 << " and, " << num3 << " is " << largest << "." << endl;





  return 0;

}


