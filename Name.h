//Pragma
#pragma once

//Class
class Name
{
private:
	char name[20];
public:
	Name(char* _name);	//Constructor
	~Name();	//Destructor

	char* getName();
};

