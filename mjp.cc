// mjp.cc 
// 
//
#include <iostream>
#include <unistd.h>
#include <string>
#include "mjpDate.hh"

int main(int argc, char **argv){

	//Option analysis

	int debug_flag = 0;
	int write_flag = 0;
	int read_flag  = 0;
	char* name = nullptr;
	int c;
	bool noOption = true;

	while ((c = getopt (argc, argv, "hdrw::")) != -1){
		noOption = false;
		switch (c)
		{
			case 'd':
				debug_flag = 1;
				break;
			case 'w':
				write_flag = 1;
				name = optarg;
				break;
			case 'r':
				read_flag = 1;
				break;
			case 'h':
				std::cout << "Usage: mjp -[rwd] <name> " << std::endl;
				std::cout << "write: mjp -w  name	 " << std::endl;
				std::cout << "read : mjp -r  		 " << std::endl;
				std::cout << "debug: mjp -d  		 " << std::endl;
				break;
			default:
				std::cout << "Usage: mjp -[rwd] <name> or mjp -h " << std::endl;
				return 1;
		}
	}
	if(noOption == true) std::cout << "Usage: mjp -[rwd] <name> or mjp -h " << std::endl; 



	if(debug_flag == 1){
	mjpDate jammerTime;
	std::cout << jammerTime.getTimeStamp() << std::endl;
	if(std::getenv("HOME") == nullptr) std::cout << " no home" << std::endl;
	if(std::getenv("XDG_DATA_HOME") == nullptr) std::cout << " no xdg" << std::endl;
	}

	if(read_flag == 1){
	}



	if(read_flag == 1){
	}
	


	return 0;
}
