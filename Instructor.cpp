//
// Created by Neil on 4/28/2017.
//

#include <queue>
#include <iomanip>
#include <cmath>
#include "Instructor.hpp"



/*************************************
 * CONSTRUCTORS
 *************************************/
Instructor::Instructor() {
	setName("");
	setAge(0);
	rating = 0.0;
}

Instructor::Instructor(std::string userStr, int userInt) {
	setName(userStr);
	setAge(userInt);
	rating = (5.0 - 2.0) * ( (double)rand() / (double)RAND_MAX ) + 1.5;
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
	std::cout  << std::setprecision(2) << "Rating: " << rating << std::endl;
}

void Instructor::do_work(int x) {
	std::cout << getName() << " graded papers for " << static_cast<int>(std::floor((x - x / 2) * ( (double)rand() / (double)RAND_MAX ) + (x/2)))
													<< " hours.";
}
