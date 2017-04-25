// mjpWrite.cpp
//
#include <iostream>
#include <string>
#include "mjpWrite.hpp"
#include "mjpDate.hpp"
#include <fstream>
#include <sys/stat.h>

mjpWrite::mjpWrite(){
	// data file check
	//
	if(std::getenv("XDG_DATA_HOME") == nullptr){
		//set default
		
		mkdir( strcat(std::getenv("HOME"),"/.local") ,0777);
		mkdir( strcat(std::getenv("HOME"),"/share") ,0777);
		mkdir( strcat(std::getenv("HOME"),"/mjp") ,0777);
		output.open( strcat(std::getenv("HOME"),"/data.txt"),std::ios::app);
		

	}else{
		mkdir( strcat(std::getenv("XDG_DATA_HOME"),"/mjp") ,0777);
		output.open( strcat(std::getenv("XDG_DATA_HOME"),"/data.txt"),std::ios::app);
	}
}
mjpWrite::~mjpWrite(){
	output.close();
}

void mjpWrite::Write(std::string who = "anonymous" ){

	if(who == "anonymous"){
		std::cout << "Who is jammer?:";
		std::cin >> who;
	}

	output << date.getTimeStamp() <<" "<< who << std::endl;
}
