#include <iostream>

class SerialNumber
{
	private:
		int sn; // serial number
		static int count;
	public:
		SerialNumber();
		int getSerialNumber();
		void setSerialNumber(int c);
		void infoAboutSerialNumber(SerialNumber& s);
};
	

