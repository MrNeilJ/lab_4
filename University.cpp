//
// Created by Neil on 4/28/2017.
//

#include "University.hpp"
/*************************************
 * CONSTRUCTORS
 *************************************/
University::University() {

}

University::University(std::string userUni) {
	uniName = userUni;
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
 * MEMBER FUNCTIONS
 *************************************/



/*************************************
 * GETTERS
 *************************************/

void University::printStudent(int location) {
	std::cout << "Name: " << studentGroup.at(location).getName() << std::endl;
	std::cout << "Age : " << studentGroup.at(location).getAge() << std::endl;
	std::cout << "GPA : " << studentGroup.at(location).getGpa() << std::endl;
}
