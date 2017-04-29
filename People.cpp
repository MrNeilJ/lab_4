/**************************************************************
 * Author: Neil Johnson
 *
 * Date: 4.30.2017
 *
 * Description: This is the file for the People class.  In here
 * we build the base class for individuals in the program. It
 * is used to save the individuals name, and age, as well
 * as being able to retrieve this information.  We also have
 * virtual functions for the user to do_work methods with
 * other derived classes.
**************************************************************/

#include <cmath>
#include "People.hpp"

/*************************************
 * CONSTRUCTOR
 *************************************/
/**************************************************************
 *                  People::People
 * Description: Constructor function that saves the initial
 * information and creates an object out of the name and age
**************************************************************/
People::People() {
	name 	= "";
	age 	= 0;
}

/**************************************************************
 *                  People::People
 * Description: Constructor function that saves the initial
 * information and creates an object out of the name and age.
 * Information added for these variables is received from
 * user input.
**************************************************************/
People::People(std::string userStr, int userInt) {
	name 	= userStr;
	age		= userInt;
}

/*************************************
 * GETTERS
 *************************************/
/**************************************************************
*                  People::getName
* Description: Retrieves the name stored in the object
**************************************************************/
std::string People::getName() {
	return name;
}

/**************************************************************
*                  People::getName
* Description: Retrieves the name stored in the object
**************************************************************/
std::string People::getName() const {
	return name;
}
/**************************************************************
*                  People::getAge
* Description: Retrieves the age stored in the object
**************************************************************/
int People::getAge() {
	return age;
}

/*************************************
 * SETTERS
 *************************************/
/**************************************************************
*                  People::setName
* Description: Saves the name in the object to what the user
* inputs
**************************************************************/
void People::setName(std::string userStr) {
	name = userStr;
}

/**************************************************************
*                  People::setAge
* Description: Saves the Age in the object to what the user
* inputs
**************************************************************/
void People::setAge(int userInt) {
	age = userInt;
}

/*************************************
 * MEMBER FUNCTIONS
 *************************************/
/**************************************************************
*                  People::doWork
* Description: Returns the hours a user works, it varies due
* to it being on a random scale.
**************************************************************/
void People::do_work(int x) {
	std::cout << getName() << "worked for " << static_cast<int>(std::floor((x - x / 2) * ( (double)rand() / (double)RAND_MAX ) + (x/2)))
											<< " hours.";
}

/**************************************************************
*                  People::print
* Description: Prints out to the console the values stored
* in the People object in an easy to read format
**************************************************************/
void People::print() {
		std::cout << "Name: " << name << std::endl;
		std::cout << "Age : " << age << std::endl;
}



