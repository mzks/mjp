// mjpRead.cpp
//
#include <iostream>
#include <string>
#include "mjpRead.hpp"
#include "mjpDate.hpp"
#include <fstream>

mjpRead::mjpRead(){
	//input.open(filename,std::ios::in);
	
	if(std::getenv("XDG_DATA_HOME") == nullptr){
		//set default
		
		input.open( strcat(std::getenv("HOME"),"/.local/share/mjp/data.txt"),std::ios::in);
		
	}else{
		input.open( strcat(std::getenv("XDG_DATA_HOME"),"/mjp/data.txt"),std::ios::in);
	}


}
mjpRead::~mjpRead(){
	input.close();
}

void mjpRead::Read(){
	int yyyy, mm, dd, hh, mi, ss;
	std::string name;

	while(input >> yyyy >> mm >> dd >> hh >> mi >> ss >> name){
		std::cout << yyyy <<" " <<  mm <<" " <<  dd <<" " <<  hh <<" " <<  mi <<" " <<  ss << " " << name <<  std::endl;
	}
}
