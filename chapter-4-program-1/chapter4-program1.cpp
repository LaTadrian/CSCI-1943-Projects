/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <Header.h>
#include <iomanip>
using namespace std;

float loan, insurance, gas, oil, tires, maintenance, monthly;


int main()
{
	head();

	cout << "This program will calculate your monthly expenses towards your vehicle.\n\n";

	cout << "Enter loan payment: ";
	cin >> loan;

	cout << "Enter insurance payment: ";
	cin >> insurance;

	cout << "Enter gas payment: ";
	cin >> gas;

	cout << "Enter oil payment: ";
	cin >> oil;

	cout << "Enter tire payment: ";
	cin >> tires;

	cout << "Enter maintenance payment: ";
	cin >> maintenance;

	double yearlyTotal;
	double tenPercent;
	double grandTotal;

	monthly = loan + insurance + gas + oil + tires + maintenance;
	yearlyTotal = monthly * 12;

	if (yearlyTotal > 1000)
	{
		tenPercent = yearlyTotal * 0.10;
	}
	else
	{
		tenPercent = 0;
	}

	grandTotal = yearlyTotal + tenPercent;

	cout << fixed << setprecision(2);

	cout << "\n\n";

	cout << left << setw(30) << "Loan Payment"
	     << "$" << right << setw(15) << loan << endl;

	cout << left << setw(30) << "Insurance"
	     << " " << right << setw(15) << insurance << endl;

	cout << left << setw(30) << "Gas"
	     << " " << right << setw(15) << gas << endl;

	cout << left << setw(30) << "Oil"
	     << " " << right << setw(15) << oil << endl;

	cout << left << setw(30) << "Tires"
	     << " " << right << setw(15) << tires << endl;

	cout << left << setw(30) << "Maintenance"
	     << " " << right << setw(15) << maintenance << endl;

	cout << endl;

	cout << left << setw(30) << "Total"
	     << "$" << right << setw(15) << monthly << endl;

	cout << left << setw(30) << "Yearly Total"
	     << "$" << right << setw(15) << yearlyTotal << endl;

	cout << left << setw(30) << "10%"
	     << "$" << right << setw(15) << tenPercent << endl;

	cout << left << setw(30) << "Grand Total"
	     << "$" << right << setw(15) << grandTotal << endl;



	return 0;
}
