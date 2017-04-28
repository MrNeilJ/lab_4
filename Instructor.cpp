//
// Created by Neil on 4/28/2017.
//

#include <queue>
#include "Instructor.hpp"



/*************************************
 * CONSTRUCTORS
 *************************************/
Instructor::Instructor() {
	setName("");
	setAge(0);
	rating = 0.0;
}

Instructor::Instructor(std::string userStr, int userInt, double userDoub) {
	setName(userStr);
	setAge(userInt);
	rating = userDoub;
}

/*************************************
 * SETTERS
 *************************************/
void Instructor::setRating(double userRating) {
	rating = userRating;
}

/*************************************
 * GETTERS
 *************************************/
double Instructor::getRating() {
	return rating;
}

void Instructor::print() {
	People::print();
	std::cout << "Rating: " << rating << std::endl;
}
