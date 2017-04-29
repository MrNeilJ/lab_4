/**************************************************************
 * Author: Neil Johnson
 *
 * Date: 4.30.2017
 *
 * Description: This is the Student class for the
 * University application.In here we are able to build student
 * objects filled with their name, age, and GPA.
 * From here we can return these values, or even set them to do
 * work. We also have methods that allow us to print the
 * students in an easy to read format
**************************************************************/

#include "Student.hpp"
#include <iomanip>
#include <cmath>

/*************************************
 * CONSTRUCTOR
 *************************************/
/**************************************************************
*                  Student::Student
* Description: Constructor function that saves the initial
* information and creates an object out of the name and age and GPA
**************************************************************/
Student::Student() {
	setName("");
	setAge(0);
	gpa = 0.0;
}

/**************************************************************
*                  Student::Student
* Description: Constructor function that saves the initial
* information and creates an object out of the name and age and
 * GPA. It uses the users input for these values
**************************************************************/
Student::Student(std::string userStr, int userInt){
	setName(userStr);
	setAge(userInt);
	gpa = (4.0 - 2.0) * ( (double)rand() / (double)RAND_MAX ) + 2.0;
}


/*************************************
 * SETTERS
 *************************************/
/**************************************************************
*                  Student::setGPA
* Description: Sets the students GPA to a values the user inputs
**************************************************************/
void Student::setGpa(double userGpa) {
	gpa = userGpa;
}

/*************************************
 * GETTERS
 *************************************/
/**************************************************************
*                  Student::getGPA
* Description: Returns the GPA stored in the student object
**************************************************************/
double Student::getGpa() {
	return gpa;
}

/*************************************
 * MEMBER FUNCTIONS
 *************************************/
/**************************************************************
*                  Student::print
*	Prints out the information stored in the Student object
 *	in an easy to read format
**************************************************************/
void Student::print() {
	People::print();
	std::cout << std::setprecision(2) << "GPA: "  << gpa << std::endl;
}

/**************************************************************
*                  Student::doWork
*	Prints out the amount of time the Student is willing
 *	to study, the number is a random value each time.
**************************************************************/
void Student::do_work(int x) {
	std::cout << getName() << " studied for " 	<< static_cast<int>(std::floor((x - x / 2) * ( (double)rand() / (double)RAND_MAX ) + (x/2)))
												<< " hours.";
}
