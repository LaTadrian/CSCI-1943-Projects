/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include "Header.h"
#include <string>

using namespace std;

string name, major, school, graduate, college, car_year, car_make,car_model;



int main()
{
    cout << "What is your name?\n";
    getline(cin, name);
    
    cout << "What is your major?\n";
    getline(cin, major);
    
    cout << "What high school did you graduate from?\n";
    cin >> school;
    
    cout << "What year did you graduate from high school?\n";
    cin >> graduate;
    
    cout << "What year did you start college?\n";
    cin >>college;
    
    cout << "What is your dream car?\n";
    cin >> car_year >> car_make >> car_model;
    
    cout << "Hello,\n\n" << "My name is " << name << "." << " I graduated from " << school <<
    " High School in " << graduate << ". My dream car is a " << car_year << ", " << car_make << ", " << car_model
    << ".";
    

    return 0;
}
