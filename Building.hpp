/**************************************************************
 * Author: Neil Johnson
 *
 * Date: 4.30.2017
 *
 * Description: This is the header building class for the University
 * program.  In here we are able to construct building objects
 * and can print out information stored in it, such as
 * the name of the building, size in sqft and even the address.
**************************************************************/

#ifndef LAB_4_BUILDING_HPP
#define LAB_4_BUILDING_HPP

#include <iostream>

class Building {
private:
	std::string name;
	std::string address;
	double sqft;

public:
	// Constructor
	Building(std::string, std::string, double);

	// Setters
	void setName(std::string);
	void setAddress(std::string);
	void setSqft(double);

	// Getters
	std::string getName();
	std::string getAddress();
	double getSqft();

	// Member Functions
	void printBuilding();
};
#endif //LAB_4_BUILDING_HPP
