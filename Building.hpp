//
// Created by Neil on 4/28/2017.
//

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
