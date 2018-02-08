//Inclusions
#include "CurrentYear.h"

//Constructor
CurrentYear::CurrentYear(int _year) {
	year = _year;
}

//Destructor
CurrentYear::~CurrentYear() {

}

//Methods
int CurrentYear::getCurrentYear() {
	return year;
}