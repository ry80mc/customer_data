//Implementation of CustomerData class;


//	Preprocessor commands
#include "CustomerData.h"
#include "PersonData.h"
#include <string>
using namespace std;



//	Mutators
void CustomerData::setCustomerNumber(int cN)
{
	customerNumber = cN;
}

void CustomerData::setMailingList(bool mL)
{
	mailingList = mL;
}


//	Accessors
int CustomerData::getCustomerNumber() const
{
	return customerNumber;
}

bool CustomerData::getMailingList() const
{
	return mailingList;
}


//	EOF