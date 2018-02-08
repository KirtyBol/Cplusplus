//Pragma
#pragma once

//Inclusions
#include "Name.h"
#include "Age.h"
#include "BirthYear.h"
#include "CurrentYear.h"

//Class
class Person
{
private:
	Age* age;
	Name* name;
	BirthYear* birthYear;
	CurrentYear* currentYear;
	bool knownBirthYear;

	int tempAge;
	char tempName[20];
	int tempBirthYear;
	int tempCurrentYear;
public:
	Person(bool knownBirthYear);	//Constructor with birthyear
	Person();	//Constructor with current year
	~Person();	//Destructor
	
	//Age
	int askAge();

	//Name
	char* askName();

	//Current year
	int askCurrentYear();

	//Birth year
	int askBirthYear();

	//Print characteristics
	void printInfo();
};

