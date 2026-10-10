#include <string>
#include <iostream>
#include <sstream>
#include "date.h"

Date::Date(){
	Day=0;
	Month=0;
	Year=0;
}//end Date construct


void Date::init(std::string dateString){
	std::stringstream converter;
	std::string temp;
	int Day;
	int Month;
	int Year;
	std::stringstream lineParser(dateString);
	getline(lineParser, temp, '/');
       	converter.str("");
	converter << temp;
	converter >> Month;
	Date::Month = Month;
	converter.clear();
	converter.str("");
	getline(lineParser, temp, '/');
	converter << temp;
	converter >> Day;
	Date::Day = Day;
	converter.clear();
	converter.str("");
	getline(lineParser, temp);
	converter << temp;
	converter >> Year;
	Date::Year = Year;
}// end date init

void Date::printDate(){
	std::cout << "Month: " << Date::Month << "\n";
	std::cout << "Day: " << Date::Day << "\n";
	std::cout << "Year: " << Date::Year << "\n";
	std::cout << std::endl;
}//end print
