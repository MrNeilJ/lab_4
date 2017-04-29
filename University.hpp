/**************************************************************
 * Author: Neil Johnson
 *
 * Date: 4.30.2017
 *
 * Description: This is the Univeristy header class for this program.
 * This class host much of the functionality of the application.
 * It saves vectors for each of the types of groups we have and
 * allows us to save new users, access their information, search
 * through them, make them do work, and even print out the
 * information in an easy to ready format
 **************************************************************/

#ifndef LAB_4_UNIVERSITY_HPP
#define LAB_4_UNIVERSITY_HPP

#include <iostream>
#include "People.hpp"
#include "Student.hpp"
#include "Instructor.hpp"
#include "Building.hpp"
#include <vector>
#include <memory>

class University {
private:
	std::string uniName;
	int population;
	int numStudents;
	int numInstructors;
	int numBuildings;

	std::vector<Student> studentGroup;
	std::vector<Instructor> instructorGroup;
	std::vector<Building> buildingGroup;


public:
	// Constructors
	University();
	University(std::string);

	// Setters
	void addStudent(Student);
	void addInstructor(Instructor);
	void addBuilding(Building);

	// Getters
	std::string getUniName();
	int getPopulation();
	int getNumStudents();
	int getNumInstructors();
	int getNumBuildings();

	// Member Functions
	void printStudentBody();
	void printInstructorBody();
	void printBuildings();
	People* memberSearch(std::string);

};



#endif //LAB_4_UNIVERSITY_HPP
