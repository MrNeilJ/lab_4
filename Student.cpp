//
// Created by Neil on 4/28/2017.
//

#include "Student.hpp"
#include <iomanip>
#include <cmath>


/*************************************
 * CONSTRUCTOR
 *************************************/
Student::Student() {
	setName("");
	setAge(0);
	gpa = 0.0;
}

Student::Student(std::string userStr, int userInt){
	setName(userStr);
	setAge(userInt);
	gpa = (4.0 - 2.0) * ( (double)rand() / (double)RAND_MAX ) + 2.0;
}


/*************************************
 * SETTERS
 *************************************/
void Student::setGpa(double userGpa) {
	gpa = userGpa;
}

/*************************************
 * GETTERS
 *************************************/
double Student::getGpa() {
	return gpa;
}

/*************************************
 * MEMBER FUNCTIONS
 *************************************/

void Student::print() {
	People::print();
	std::cout << std::setprecision(2) << "GPA: "  << gpa << std::endl;
}

void Student::do_work(int x) {
	std::cout << getName() << " studied for " 	<< static_cast<int>(std::floor((x - x / 2) * ( (double)rand() / (double)RAND_MAX ) + (x/2)))
												<< " hours.";
}
