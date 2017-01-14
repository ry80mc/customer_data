//	Parent of CustomerData class


//	Preprocessor commands
#ifndef PERSONDATA_H
#define PERSONDATA_H

#include <string>
using namespace std;




class PersonData
{
	private:
		string lastName;
		string firstName;
		string address;
		string city;
		string state;
		string zip;
		string phoneNumber;

	public:

		//	Default Constructor: sets all member data as empty strings
		PersonData();

		//	Constructor all data members as parameters
		PersonData(string lN, string fN, string a,string c, string s, string z, string pN);


		//	Mutators
		void setLastName(string ln);
		void setFirstName(string fn);
		void setAddress(string a);
		void setCity(string c);
		void setState(string s);
		void setZip(string z);
		void setPhoneNumber(string pN);


		//	Accessors
		string getLastName() const;
		string getFirstName() const;
		string getAddress() const;
		string getCity() const;
		string getState() const;
		string getZip() const;
		string getPhoneNumber() const;

};


#endif //!PERSONDATA_H

//	EOF