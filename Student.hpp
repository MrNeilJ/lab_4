/**************************************************************
 * Author: Neil Johnson
 *
 * Date: 4.30.2017
 *
 * Description: This is the Student header class for the
 * University application.In here we are able to build student
 * objects filled with their name, age, and GPA.
 * From here we can return these values, or even set them to do
 * work. We also have methods that allow us to print the
 * students in an easy to read format
**************************************************************/

#ifndef LAB_4_STUDENT_HPP
#define LAB_4_STUDENT_HPP


#include "People.hpp"
#include <iostream>

class Student : public People {
private:
	double gpa;
public:
	// Constructors
	Student();
	Student(std::string, int);
	// Setters
	void setGpa(double);

	// Getters
	double getGpa();

	// Member functions
	void print();
	void do_work(int);

};


#endif //LAB_4_STUDENT_HPP
