//Pragma
#pragma once

//Inclusions
#include "CurrentYear.h"

//Class
class BirthYear
{
private:
	int year;
public:
	BirthYear(int _year);	//Constructor
	~BirthYear();	//Destructor

	int getBirthYear();
};