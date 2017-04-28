//
// Created by Neil on 4/28/2017.
//

#include "Building.hpp"


/*************************************
 * CONSTRUCTORS
 *************************************/

Building::Building(std::string userName, std::string userAddress, double userSqft) {
	name 	= userName;
	address = userAddress;
	sqft 	= userSqft;
}


/*************************************
 * SETTERS
 *************************************/
void Building::setName(std::string userName) {
	name = userName;
}

void Building::setAddress(std::string userAddress) {
	address = userAddress;
}

void Building::setSqft(double userSqft) {
	sqft = userSqft;
}


/*************************************
 * GETTERS
 *************************************/

std::string Building::getName() {
	return name;
}

std::string Building::getAddress() {
	return address;
}
double Building::getSqft() {
	return sqft;
}


