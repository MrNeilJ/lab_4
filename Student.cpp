//
// Created by Neil on 4/28/2017.
//

#include "Student.hpp"


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
 * CONSTRUCTOR
 *************************************/
Student::Student() {
	setName("");
	setAge(0);
	gpa = 0.0;
}

Student::Student(std::string userStr, int userInt, double userDoub){
	setName(userStr);
	setAge(userInt);
	gpa = userDoub;
}
