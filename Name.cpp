//Inclusions
#include "Name.h"
#include <iostream>

//Constructor
Name::Name(char* _name) {
	for (int i = 0; i < 20; i++) {
		name[i] = _name[i];
	}
}

//Destructor
Name::~Name() {
	
}

//Methods
char* Name::getName() {
	return name;
}