// mjpDate.cc
// Author MIZUKOSHI Keita

#include "mjpDate.hh"
#include <iostream>
#include <string>
#include <sstream>

mjpDate::mjpDate()
{
	auto  now = time(nullptr);
	auto  lt = localtime(&now);

	year = 1900 + lt->tm_year;
	month =  lt->tm_mon +1;;
	day = lt->tm_mday;
	hour = lt->tm_hour;
	min = lt->tm_min;
	sec = lt->tm_sec;
}

std::string mjpDate::getTimeStamp()
{

	std::stringstream ss;
	ss << year << " "
		<< month << " "
		<< day   << " "
		<< hour  << " "
		<< min   << " "
		<< sec; 

	return ss.str();
}
