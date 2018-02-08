//Inclusions
#include "BirthYear.h"

//Constructor
BirthYear::BirthYear(int _year) {
	year = _year;
}

//Destructor
BirthYear::~BirthYear() {

}

//Methods
int BirthYear::getBirthYear() {
	return year;
}