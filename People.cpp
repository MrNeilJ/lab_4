//
// Created by Neil on 4/28/2017.
//

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

void People::do_work(int) {

}

void People::print() {
		std::cout << "Name: " << name << std::endl;
		std::cout << "Age : " << age << std::endl;
}

