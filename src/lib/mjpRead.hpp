//mjpRead.hpp

#include <iostream>
#include <string>
#include <fstream>
#include "mjpDate.hpp"

class mjpRead{
	private:
		std::ifstream input;

	public:
		mjpRead();
		~mjpRead();
		void Read();

};
