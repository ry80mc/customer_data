//	Main
#include "CustomerData.h"
#include <string>
#include <iostream>
using namespace std;

void displayCustomer(CustomerData c);

int main()
{

	string last,
		first,
		address,
		city,
		state,
		zip,
		phoneNumber;

	int customerNumber = 0;
	bool mail = 0;


	CustomerData defaultConstructor;

	CustomerData allConstructor(last, first, address, city, state, zip, phoneNumber, customerNumber, mail);



	

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

		cout << "Zip: ";  // restrict to 5?
		cin >> zip;

		if (zip.length() != 5)// test err handle
		{
			cout << "not 5";

		}

		

		cout << "Phone Number : "; // must be 10 chars long
		cin >> phoneNumber;

		cout << "Customer Number: "; // isdigit
		cin >> customerNumber;

		cout << "Mailing List? ";  // error handle for correct string if not kick it back, else assign correct bool.  switch to handle input
		cin >> mail;

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
			allConstructor.setMailingList(mail);
		}
	}

	cout << "\nCustomer #1" << "\n-----------";
	displayCustomer(defaultConstructor);

	cout << "\nCustomer #2" << "\n-----------";
	displayCustomer(allConstructor);

	return 0;
}




void displayCustomer(CustomerData c)
{
	cout << "\nLast Name: " << c.getLastName() <<
		"\nFirst Name: " << c.getFirstName() <<
		"\nAddress: " << c.getAddress() <<
		"\nCity: " << c.getCity() <<
		"\nState: " << c.getState() <<
		"\nZIP: " << c.getZip() <<
		"\nCustomer Number: " << c.getCustomerNumber() <<
		"\nMailing List: " << c.getMailingList() << endl;
}

//	EOF