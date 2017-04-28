//
// Created by Neil on 4/28/2017.
//

#ifndef LAB_4_UNIVERSITY_HPP
#define LAB_4_UNIVERSITY_HPP

#include "People.hpp"
#include "Student.hpp"
#include "Instructor.hpp"
#include "Building.hpp"
#include <iostream>
#include <vector>

class University {
private:
	std::string uniName;
	int population;
	int numStudents;
	int numInstructors;
	int numBuildings;

	std::vector<Student> 	studentGroup;
	std::vector<Instructor> instructorGroup;
	std::vector<Building>	buildingGroup;


public:
	// Constructors
	University();
	University(std::string);

	// Setters
	void addStudent(Student);
	void addInstructor(Instructor);
	void addBuilding(Building);

	// Getters

	// Member Functions
	void printStudentBody(std::vector<Student>);

};


#endif //LAB_4_UNIVERSITY_HPP
