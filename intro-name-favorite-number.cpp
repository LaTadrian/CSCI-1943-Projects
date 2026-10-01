/******************************************************************************
LaTadrian Thomas
27 August 2027
Dr. D.
CSCI 1943

This program will introduce the group, and then ask the user for their name, and
their favorite number. Then the program will return a welcoming message to the user.
Coming into class, my group members presented their own version of the code. We 
all reviewed each other's code and gave feedback, and explained different ways to
approach the program.


*******************************************************************************/


#include <iostream>
#include <iomanip>

using namespace std;


// Create variables for user input
string name;
int favorite_number;

int main(){
    // Instead of using multiple cout objects, I attempted to put all introductory
    // group information into one line
    cout << "Welcome to the Fall 2026 Semester!\n\nTeam:\nGroup 3\n\nMembers: \nLaTadrian Thomas, Bryce Turner, Malachi Phillips, Johnathan Brue\n\nCourse: \nSoftware Design & Program II (CSCI 1943)";
    
    // Prompts the user to input their name
    cout << "\n\nWhat is your name?\n";
    cin >> name;
    
    // Prompts the user to input their favorite number
    cout << "\n\nWhat is your favorite number?\n";
    cin >> favorite_number;
    
    // Displays welcoming message to user
    cout << "\nHello, welcome to the class, " << name << "! " << favorite_number << " is a cool number!";
    
    
}
