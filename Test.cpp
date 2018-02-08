//Inclusions
#include "Person.h"
#include "Age.h"
#include <iostream>

//Namespace
using namespace std;

//Fields
Person* person;

//Main
int main()
{
	char input;
	for (;;) {
		cout << "Do you know your birth year? y/n: ";
		if (cin >> input) {
			if (input == 'y') {
				person = new Person(true);
				break;
			}

			else if (input == 'n') {
				person = new Person();
				break;
			}

			else {
				cout << "Please answer 'y' or 'n'.";
				system("cls");
			}
		}
        else{
            cout << "Please answer 'y' or 'n'.";
            system("cls");
        }
	}
	cout << endl;

	person->printInfo();


	/*Age age = 14;
	cout << age.getAge() << endl;*/

	system("Pause");
	return 0;
}
