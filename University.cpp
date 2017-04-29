//
// Created by Neil on 4/28/2017.
//

#include "University.hpp"
/*************************************
 * CONSTRUCTORS
 *************************************/
University::University() {
	uniName 		= "";
	population		= 0;
	numStudents		= 0;
	numInstructors	= 0;
	numBuildings	= 0;
}

University::University(std::string userUni) {
	uniName 		= userUni;
	population		= 0;
	numStudents		= 0;
	numInstructors	= 0;
	numBuildings	= 0;
}

/*************************************
 * SETTERS
 *************************************/
void University::addStudent(Student currStudent) {
	studentGroup.push_back(currStudent);
	population++;
	numStudents++;
}

void University::addInstructor(Instructor currInstructor) {
	instructorGroup.push_back(currInstructor);
	population++;
	numInstructors++;
}

void University::addBuilding(Building currBuilding) {
	buildingGroup.push_back(currBuilding);
	numBuildings++;
}
/*************************************
 * GETTERS
 *************************************/

std::string University::getUniName() {
	return uniName;
}

int University::getPopulation() {
	return population;
}

int University::getNumStudents() {
	return numStudents;
}

int University::getNumInstructors() {
	return numInstructors;
}

int University::getNumBuildings() {
	return numBuildings;
}

/*************************************
 * MEMBER FUNCTIONS
 *************************************/

void University::printStudentBody() {
	for (int i = 0; i < studentGroup.size(); i++) {
		studentGroup.at(i).print();
		std::cout << "---------------------" << std::endl;
	}

}

void University::printInstructorBody() {
	for (int i = 0; i < instructorGroup.size(); i++) {
		instructorGroup.at(i).print();
		std::cout << "---------------------" << std::endl;
	}
}

void University::printBuildings() {
	for (int i = 0; i < buildingGroup.size(); i++) {
		buildingGroup.at(i).printBuilding();
		std::cout << "---------------------" << std::endl;
	}
}

People* University::memberSearch(std::string memberName) {
	People* tempPtr;
	for (int i = 0; i < studentGroup.size(); i++ ) {
		if (studentGroup.at(i).getName().compare(memberName) == 0) {
			tempPtr = &studentGroup.at(i);
			return tempPtr;
		}
	}
	for (int i = 0; i < instructorGroup.size(); i++ ) {
		if (instructorGroup.at(i).getName().compare(memberName) == 0 ) {
			tempPtr = &instructorGroup.at(i);
			return tempPtr;
		}
	}
	std::cout << "Could not find user, try again" << std::endl;
	return nullptr;
}




