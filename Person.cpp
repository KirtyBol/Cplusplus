//Inclusions
#include "Person.h"
#include <iostream>

//Namespace
using namespace std;

//Constructor
Person::Person(bool _knownBirthYear) {
	age = new Age(askAge());
	name = new Name(askName());
	birthYear = new BirthYear(askBirthYear());
	currentYear = new CurrentYear(birthYear->getBirthYear() + age->getAge());
	knownBirthYear = true;
}

Person::Person() {
	age = new Age(askAge());
	name = new Name(askName());
	currentYear = new CurrentYear(askCurrentYear());
	birthYear = new BirthYear(currentYear->getCurrentYear() - age->getAge());
	knownBirthYear = false;
}

//Destructor
Person::~Person() {
	
}

//Methods
int Person::askAge() {
	cout << "What is your age? ";
	cin >> tempAge;
	cout << "You are " << tempAge << " years old." << endl;

	return tempAge;
}

char* Person::askName() {

	cout << "What is your name? ";
	cin >> tempName;
	cout << "You are called " << tempName << "." << endl;

	return tempName;
}

int Person::askCurrentYear() {
	cout << "What year is it? ";
	cin >> tempCurrentYear;
	cout << "It is now " << tempCurrentYear << "." << endl;

	return tempCurrentYear;
}

int Person::askBirthYear() {
	cout << "What year were you born in? ";
	cin >> tempBirthYear;
	cout << "You were born in " << tempBirthYear << "." << endl;

	return tempBirthYear;
}

void Person::printInfo() {
	if (knownBirthYear) {
		cout << "Hi! My name is " << name->getName() << " and I am " << age->getAge() << " years old." << endl;
		cout << "I am born in " << birthYear->getBirthYear() << ", thus the current year is " << currentYear->getCurrentYear() << " or " << currentYear->getCurrentYear() + 1 << endl;
	}

	else {
		cout << "Hi! My name is " << name->getName() << " and I am " << age->getAge() << " years old." << endl;
		cout << "It is now " << currentYear->getCurrentYear() << ", that means I was born in " << birthYear->getBirthYear() << " or " << birthYear->getBirthYear() - 1 << "." << endl;
	}
}