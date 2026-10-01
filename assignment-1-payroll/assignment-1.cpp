/******************************************************************************
This program will ask the user to input information such as Employee Name, Job title,
Wage, and hours worked. After the information is entered it will calculate tax deductions,
gross pay, and net pay.

*******************************************************************************/
#include <iostream>
#include <iomanip>
#include "Header.h"
using namespace std;

string employee_Name;
string job_title;
float employee_wage; 
float employee_hours;
float tax = 0.172;
float gross_pay;
float net_pay;
float deductions;
int main()
{
    head();
    
    cout << "Enter Employee first and last Name: ";
    getline(cin, employee_Name);
    
    cout << "Enter Employee job title: ";
    getline(cin, job_title);
    
    cout << "Enter Employee wage: ";
    cin >> employee_wage;
    
    cout << "Enter amount of hours Employee has worked: ";
    cin >> employee_hours;
    
    cout<< endl;
    
    deductions = (employee_wage * employee_hours) * tax;
    gross_pay = (employee_wage * employee_hours);
    net_pay = (gross_pay - deductions);
    
    cout << fixed << showpoint << setprecision(2);
    
    cout    << left << setw(25) << "Name"
            << left << setw(30) << "Job Title"
            << right << setw(10) << "Wage"
            << right << setw(10) << "Hours"
            << right << setw(12) << "Gross Pay"
            << right << setw(10) << "Taxes"
            << right << setw(12) << "Net Pay" << endl;
    
    cout    << left << setw(25) << employee_Name
            << left << setw(30) << job_title
            << right << setw(10) << employee_wage
            << right << setw(10) << employee_hours
            << right << setw(12) << gross_pay
            << right << setw(10) << deductions  
            << right << setw(12) << net_pay << endl;

    return 0;
}
