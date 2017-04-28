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

void University::printStudentBody(std::vector<Student> group) {
	for (int i = 0; i < group.size(); i++) {
		group.at(i).print;
		std::cout << "---------------------" << std::endl;
	}

}
