// mjp.cc 
// 
#include <iostream>
#include <unistd.h>
#include <string>
#include "./lib/mjpDate.hpp"
#include "./lib/mjpWrite.hpp"
#include "./lib/mjpRead.hpp"

int main(int argc, char **argv){

	int debug_flag = 0;
	int write_flag = 0;
	int read_flag  = 0;
	std::string sname;
	int c;
	bool noOption = true;

	while((c = getopt (argc, argv, "hdrw::")) != -1){
		noOption = false;
		switch(c){
			case 'd':
				debug_flag = 1;
				break;
			case 'w':
				write_flag = 1;
				sname = optarg;
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

	if(noOption == true){
	   	std::cout << "no option" << std::endl; 
		return 1;
	}
	
	if(debug_flag == 1){
		mjpDate mjpJammerDate;
		std::cout << mjpJammerDate.getTimeStamp() << std::endl;
	}

	if(write_flag == 1){
		mjpWrite writeFile;
		writeFile.Write(sname);
	}
	
	if(read_flag == 1){
		mjpRead readFile;
		readFile.Read();
	}

	return 0;
}
