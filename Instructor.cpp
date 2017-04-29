/**************************************************************
 * Author: Neil Johnson
 *
 * Date: 4.30.2017
 *
 * Description: This is the Instructor class for the University
 * application.  In here we are able to build instructor objects
 * filled with their name, age, and teacher rating.  From here
 * we can return these values, or even set them to do work
 * We also have methods that allow us to print the instructors
 * in an easy to read format
 **************************************************************/

#include <queue>
#include <iomanip>
#include <cmath>
#include "Instructor.hpp"

/*************************************
 * CONSTRUCTORS
 *************************************/
/**************************************************************
 *                  Instructor::Instructor
 *	Constructor for the object, builds the object with blank
 *	values
 **************************************************************/
Instructor::Instructor() {
	setName("");
	setAge(0);
	rating = 0.0;
}

/**************************************************************
 *                  Instructor::Instructor
 *	Constructor for the object, builds the object with values
 *	the user inputs
 **************************************************************/
Instructor::Instructor(std::string userStr, int userInt) {
	setName(userStr);
	setAge(userInt);
	rating = (5.0 - 2.0) * ( (double)rand() / (double)RAND_MAX ) + 1.5;
}

/*************************************
 * SETTERS
 *************************************/
/**************************************************************
*                  Instructor::setRating
*	Sets the instructor rating value to whatever the user inputs
**************************************************************/
void Instructor::setRating(double userRating) {
	rating = userRating;
}

/*************************************
 * GETTERS
 *************************************/
/**************************************************************
*                  Instructor::getRating
*	Returns the rating stored in the Instructor object
**************************************************************/
double Instructor::getRating() {
	return rating;
}

/**************************************************************
*                  Instructor::print
*	Prints out the information stored in the Instructor object
 *	in an easy to read format
**************************************************************/
void Instructor::print() {
	People::print();
	std::cout  << std::setprecision(2) << "Rating: " << rating << std::endl;
}

/**************************************************************
*                  Instructor::doWork
*	Prints out the amount of time the Instructor is willing
 *	to grade papers, the number is a random value each time.
**************************************************************/
void Instructor::do_work(int x) {
	std::cout << getName() << " graded papers for " << static_cast<int>(std::floor((x - x / 2) * ((double)rand() / (double)RAND_MAX ) + (x/2)))
													<< " hours.";
}
