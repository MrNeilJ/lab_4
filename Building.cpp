/**************************************************************
 * Author: Neil Johnson
 *
 * Date: 4.30.2017
 *
 * Description: This is the building class for the University
 * program.  In here we are able to construct building objects
 * and can print out information stored in it, such as
 * the name of the building, size in sqft and even the address.
**************************************************************/

#include <iomanip>
#include "Building.hpp"


/*************************************
 * CONSTRUCTORS
 *************************************/
/**************************************************************
 *                  Building::Building
 * Description: Constructor function that saves the initial
 * information and creates an object out of the name, address
 * and sqft
**************************************************************/
Building::Building(std::string userName, std::string userAddress, double userSqft) {
	name 	= userName;
	address = userAddress;
	sqft 	= userSqft;
}


/*************************************
 * SETTERS
 *************************************/
/**************************************************************
 *                  Building::setName
 *	Sets the name of the building to whatever the user inputs
**************************************************************/
void Building::setName(std::string userName) {
	name = userName;
}

/**************************************************************
 *                  Building::setAddress
 *	Sets the address of the building to whatever the user inputs
**************************************************************/
void Building::setAddress(std::string userAddress) {
	address = userAddress;
}

/**************************************************************
 *                  Building::setSqft
 *	Sets the square feet of the building to whatever the user
 *	inputs
**************************************************************/
void Building::setSqft(double userSqft) {
	sqft = userSqft;
}


/*************************************
 * GETTERS
 *************************************/
/**************************************************************
 *                  Building::getName
 *	Returns the name of the building back to the user for use
**************************************************************/
std::string Building::getName() {
	return name;
}

/**************************************************************
 *                  Building::getAddress
 *	Returns the address of the building back to the user for use
**************************************************************/
std::string Building::getAddress() {
	return address;
}

/**************************************************************
 *                  Building::getSqft
 *	Returns the square feet of the building back to the user
 *	for use
**************************************************************/
double Building::getSqft() {
	return sqft;
}

/*************************************
 * MEMBER FUNCTIONS
 *************************************/
/**************************************************************
 *                  Building::printBuilding
 *	Prints to the console an easy to read layout of the
 *	information stored within the current building object
**************************************************************/
void Building::printBuilding() {
	std::cout << std::fixed << std::setprecision(1) << "Building:    " << getName() << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "Address:     " << getAddress() << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "Square Foot: " << getSqft() << std::endl;
}
