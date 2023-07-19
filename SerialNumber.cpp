#include "SerialNumber.h"

int SerialNumber::count = 0;
	
SerialNumber::SerialNumber()
{
	sn = 0;
	++count;
	setSerialNumber(count);		
}

int SerialNumber::getSerialNumber()
{
	return sn;
}

void SerialNumber::setSerialNumber(int c)
{
	sn = c;	
}

void SerialNumber::infoAboutSerialNumber(SerialNumber& s)
{
	std::cout << "i am object number " << s.sn << '\n';
}
