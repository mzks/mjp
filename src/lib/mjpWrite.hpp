//mjpWrite.hpp

#include <iostream>
#include <string>
#include <fstream>
#include "mjpDate.hpp"

class mjpWrite{
	private:
		mjpDate date;
		std::ofstream output;

	public:
		mjpWrite();
		void Write(std::string);

};
