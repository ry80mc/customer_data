//Implementation of PersonData class;


//	Preprocessor commands
#include "PersonData.h"
#include <string>
using namespace std;


//	Default Constructor
PersonData::PersonData()
{
	lastName = "";
	firstName = "";
	address = "";
	city = "";
	state = "";
	zip = "";
	phoneNumber = "";
}


//	Constructor all data members as parameters
PersonData::PersonData(string lN, string fN, string a, string c, string s, string z, string pN)
{
	lastName = lN;
	firstName = fN;
	city = c;
	state = s;
	zip = z;
	phoneNumber = pN;
}



//	Mutators
void PersonData::setLastName(string ln)
{
	lastName = ln;
}

void PersonData::setFirstName(string fn)
{
	firstName = fn;
}

void PersonData::setAddress(string a)
{
	address = a;
}

void PersonData::setCity(string c)
{
	city = c;
}

void PersonData::setState(string s)
{
	state = s;
}

void PersonData::setZip(string z)
{
	zip = z;
}

void PersonData::setPhoneNumber(string pN)
{
	phoneNumber = pN;
}


//	Accessors
string PersonData::getLastName() const
{
	return lastName;
}

string PersonData::getFirstName() const
{
	return firstName;
}

string PersonData::getAddress() const
{
	return address;
}

string PersonData::getCity() const
{
	return city;
}

string PersonData::getState() const
{
	return state;
}

string PersonData::getZip() const
{
	return zip;
}

string PersonData::getPhoneNumber() const	
{
	return phoneNumber;
}


//	EOF