//	Child of PersonData class

#ifndef CUSTOMERDATA_H
#define CUSTOMERDATA_H
#include "PersonData.h"
#include <string>
using namespace std;


class CustomerData : public PersonData
{
	private:
		int customerNumber;
		bool mailingList;

	public:
		
		//	Constructors
			CustomerData::CustomerData() : PersonData() { customerNumber = 0; mailingList = true; }

		CustomerData::CustomerData(string lN, string fN, string a, string c, string s, string z, string pN, int cN, bool mL) : PersonData(lN, fN, a, c, s, z, pN) {}
		
		//	Mutators
		void setCustomerNumber(int cN);
		void setMailingList(bool mL);


		//	Accessors
		int getCustomerNumber() const;
		bool getMailingList() const;
};


#endif // !CUSTOMERDATA_H

//	EOF
