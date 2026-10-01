

#include <iostream>
#include <iomanip>
#include <Header.h>
using namespace std;

int main()
{
    head();
    char choice;
    int number;
    int sum;
    double average;

    choice = 'y';

    do
    {
        sum = 0;

        for (int i = 1; i <= 3; i++)
        {
            cout << "Enter Number: ";
            cin >> number;

            sum += number;
        }

        average = sum / 3.0;

        cout << fixed << setprecision(2);
        cout << endl;
        cout << "Average: " << average << endl;
        cout << endl;

        cout << "Type 'y' to calculate another average: ";
        cin >> choice;

        cout << endl;

    } while (choice == 'y' || choice == 'Y');

    cout << "Program Ended." << endl;

    return 0;
}
