#include <iostream>
#include <string>
#include "student.h"
#include "address.h"
#include "date.h"

Student::Student(){
	Student::Fname = "";
	Student::Lname = "";
	Student::CreditHours = 0;
	DOB = new Date();
	GradDate = new Date();
	Address = new Address();
} // end student construct

void student::init(std::string Studentstr){
	std::string Fname;
	std::string Lname;
	int CreditHours;
	std::string DateString;
	std::string AddressString;
	std::string temp;
	std::stringstream converter;
	std::stringstrream lineParser(Studentstr);
	getline(lineParser, Fname, ',');
	Student::Fname = Fname;
	getline(lineParser, Lname, ',');
	Student::Lname = Lname;
	for(i=0;i<4;i++){
		getline(lineParser, Address, ',');
	}// end for
	getline(lineParser, DateString, ',');
	DOB->init(DateString);
	getline(lineParser, DateString, ',');
	GradDate->init(DateString);
	Address->init(AddressString);
	getline(lineParser, temp);
	converter << temp;
	converter >> CreditHours;
	Student::CreditHours = CreditHours;
}// end student init

void Student::printStudent(){
	std::cout << Fname << " " << Lname "\n";
	std::cout << Address::Street << "\n";
	std::cout << Address::City << " " << Address::State << ", " << Address::Zip << "\n";
       	std::cout << "DOB: " << Student::DOB* << "\n";
	std::cout << "Grad: " << Student::GradDate << "\n";
	std::cout << "Credits: " << Student::CreditHours << "\n";
	std::cout << "-------------------" << "\n";
	std::cout << Lname << ", " << Fname << endl;
}// end print	
