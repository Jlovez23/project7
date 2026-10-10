#include <string>
#include <iostream>
//#include <cstdlib>
#include <sstream>
#include "address.h"

Address::Address(){
	Address::Street="";
	Address::City="";
	Address::State="";
	Address::Zip="";
} //end address constructor

void Address::init(std::string Street, std::string City, std::string State, std::string Zip){
	/*
	std::stringstream lineParser(AddressData);
	getline(lineParser, Street, ',');
	Address::Street=Street;
	getline(lineParser, City, ',');
	Address::City = City;
	getline(lineParser, State, ',');
	Address::State = State;
	getline(lineParser, Zip, ',');
	Address::Zip = Zip;
	*/
	this->Street = Street;
	this->City = City;
	this->State = State;
	this->Zip = Zip;	
} //end address initializer

void Address::printAddress(){
	std::cout << "Street: " << Address::Street << "\n"; 
	std::cout << "City: " << Address::City << "\n"; 
	std::cout << "State: " << Address::State << "\n"; 
	std::cout << "Zip Code: " << Address::Zip << "\n"; 
	std::cout << std::endl;
} //end print
