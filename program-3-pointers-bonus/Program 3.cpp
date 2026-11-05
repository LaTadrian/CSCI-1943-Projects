
#include <iostream>
#include "Header.h"

using namespace std;

int age = 18;
int* agePtr = &age;

int main() {

	head();

	cout << age << endl;

	*agePtr = 19;
	
	cout << *agePtr << endl;
	return 0;
}

