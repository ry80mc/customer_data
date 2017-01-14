/*
Purpose:  Inputs and displays two sets of customer information.
		  Uses programmer defined classes:: "PersonData.h" and "CustomerData.h"
		  Inheritance is: "PersonData.h" is parent and "CustomerData.h" is child.



Written by: Ryan McMillan
Programming III (CISS 243)
Instructor: James Viviano
11 January 2017
*/



//	Preprocessor commands
#include "CustomerData.h"
#include <string>
#include <iostream>
using namespace std;



//	Function Prototype
void displayCustomer(CustomerData c);




////	Main
int main()
{
	//	Variables used to interact with CustomerData object's member data.
	string last,
		first,
		address,
		city,
		state,
		zip,
		phoneNumber;

	int customerNumber = 0;
	bool mail = 0;

	//	Local main() variable
	string convertStringToBool;




	//	Create 2 instances of CustomerData.  defaultConstructor(default)
	//	and allConstructor(all parameters used in object)
	CustomerData defaultConstructor;

	CustomerData allConstructor(last, first, address, city, state, zip, phoneNumber, customerNumber, mail);

	

	//	Loop to set both objects member data of CustomerData object.
	//	0 is default constuctor. 1 is all parameters constructor.
	for (int counter = 0; counter <= 1; counter++)
	{
		cout << "\n\tINPUT CUSTOMER #" << counter + 1 << endl;

		cout << "\nLast Name: ";
		cin >> last;

		cout << "First Name: ";
		cin >> first;

		cout << "Address: ";
		cin >> address;

		cout << "City: ";
		cin >> city;

		cout << "State: ";
		cin >> state;

		cout << "Zip: ";
		cin >> zip;

		cout << "Phone Number : ";
		cin >> phoneNumber;

		cout << "Customer Number: ";
		cin >> customerNumber;

		cout << "Mailing List? ";
		cin >> convertStringToBool;




		if (counter == 0)
		{
			defaultConstructor.setLastName(last);
			defaultConstructor.setFirstName(first);
			defaultConstructor.setAddress(address);
			defaultConstructor.setCity(city);
			defaultConstructor.setState(state);
			defaultConstructor.setZip(zip);
			defaultConstructor.setPhoneNumber(phoneNumber);
			defaultConstructor.setCustomerNumber(customerNumber);

			if (convertStringToBool == "YES")
				mail = true;

			if (convertStringToBool == "NO")
				mail = false;

			defaultConstructor.setMailingList(mail);
		}

		else
		{
			allConstructor.setLastName(last);
			allConstructor.setFirstName(first);
			allConstructor.setAddress(address);
			allConstructor.setCity(city);
			allConstructor.setState(state);
			allConstructor.setZip(zip);
			allConstructor.setPhoneNumber(phoneNumber);
			allConstructor.setCustomerNumber(customerNumber);

			if (convertStringToBool == "YES")
				mail = true;

			if (convertStringToBool == "NO")
				mail = false;

			allConstructor.setMailingList(mail);
		}
	}


	//	Begin displaying data:  "Customer #1" uses default constructor of "CustomerData.h"
	//	"Customer #2" uses all the parameters for CustomerData object: "CustomerData.h"
	cout << "\nCustomer #1" << "\n-----------";
	displayCustomer(defaultConstructor);

	cout << "\nCustomer #2" << "\n-----------";
	displayCustomer(allConstructor);


	return 0;
}



//	Display Customer data:  Runs CustomerData member functions
//	of "PersonData.h" passed to it's "child Costumer.h".
//	Determines boolean return of getMailingList to a string.
void displayCustomer(CustomerData c)
{
	cout << "\nLast Name: " << c.getLastName() <<
		"\nFirst Name: " << c.getFirstName() <<
		"\nAddress: " << c.getAddress() <<
		"\nCity: " << c.getCity() <<
		"\nState: " << c.getState() <<
		"\nZIP: " << c.getZip() <<
		"\nCustomer Number: " << c.getCustomerNumber();


	if (c.getMailingList() == false)
		cout << "\nMailing List: NO" << endl;

	if (c.getMailingList() == true)
		cout << "\nMailing List: YES" << endl;
}

//	EOF