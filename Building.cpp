//
// Created by Neil on 4/28/2017.
//

#include <iomanip>
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

/*************************************
 * MEMBER FUNCTIONS
 *************************************/

void Building::printBuilding() {
	std::cout << std::fixed << std::setprecision(1) << "Building:    " << getName() << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "Address:     " << getAddress() << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "Square Foot: " << getSqft() << std::endl;
}
