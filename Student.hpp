//
// Created by Neil on 4/28/2017.
//

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
