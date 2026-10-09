#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "address.h"

Address::Address(){
	Address::street="";
	Address::city="";
	Address::state="";
	Address::Zip="";
} //end address constructor

void Address::init(AddressData){
	

