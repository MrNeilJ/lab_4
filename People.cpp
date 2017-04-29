//
// Created by Neil on 4/28/2017.
//

#include <cmath>
#include "People.hpp"

/*************************************
 * CONSTRUCTOR
 *************************************/
People::People() {
	name 	= "";
	age 	= 0;
}

People::People(std::string userStr, int userInt) {
	name 	= userStr;
	age		= userInt;
}

/*************************************
 * GETTERS
 *************************************/
std::string People::getName() {
	return name;
}

std::string People::getName() const {
	return name;
}

int People::getAge() {
	return age;
}

/*************************************
 * SETTERS
 *************************************/
void People::setName(std::string userStr) {
	name = userStr;
}

void People::setAge(int userInt) {
	age = userInt;
}


/*************************************
 * MEMBER FUNCTIONS
 *************************************/

void People::do_work(int x) {
	std::cout << getName() << "worked for " << static_cast<int>(std::floor((x - x / 2) * ( (double)rand() / (double)RAND_MAX ) + (x/2)))
											<< " hours.";
}

void People::print() {
		std::cout << "Name: " << name << std::endl;
		std::cout << "Age : " << age << std::endl;
}



