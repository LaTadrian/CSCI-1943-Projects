
#include <iostream>
#include <iomanip>
#include <Header.h>
using namespace std;

int main()
{
    head();
    
    int number;
    char code;
    double value = 28.82;

    cout << "Enter a number between 10 and 30: ";
    cin >> number;

    if (number < 10 || number > 30)
    {
        cout << "An invalid number has been entered." << endl;
        return 0;
    }

    cout << "Enter a code (A, B, or C): ";
    cin >> code;

    if (code != 'A' && code != 'B' && code != 'C')
    {
        cout << "An invalid code has been entered." << endl;
        return 0;
    }

    if (number >= 10 && number <= 20 && code == 'A')
    {
        value += 5;
    }
    else if (number >= 19 && number <= 30 && code == 'B')
    {
        value += 10;
    }
    else if (number >= 19 && number <= 30 && code == 'C')
    {
        value += 100;
    }
    else
    {
        cout << "Invalid criteria." << endl;
        return 0;
    }

    cout << fixed << setprecision(2);

    cout << endl;
    cout << "Number Entered: " << number << endl;
    cout << "Code Entered: " << code << endl;
    cout << "Computed Value: " << value << endl;

    return 0;
}
