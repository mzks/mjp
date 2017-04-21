#ifndef _INC_DATE
#define _INC_DATE

//mjpDate.hh
//author Mizukoshi Keita

#include <string>

class mjpDate
{
	private:
		int year;
		int month;
		int day;
		int hour;
		int min;
		int sec;

	public:
		mjpDate();
		std::string getTimeStamp();
};

#endif //_INC_DATE
