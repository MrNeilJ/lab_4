/**************************************************************
 * Author: Neil Johnson
 *
 * Date: 4.30.2017
 *
 * Description: This is the University class for this program.
 * This class host much of the functionality of the application.
 * It saves vectors for each of the types of groups we have and
 * allows us to save new users, access their information, search
 * through them, make them do work, and even print out the
 * information in an easy to ready format
 **************************************************************/

#include "University.hpp"
/*************************************
 * CONSTRUCTORS
 *************************************/
/**************************************************************
*                  University::University
* Description: Constructor function that saves the initial
* information and creates an object out of the name, pop,
* number of students / instructors / buildings
**************************************************************/
University::University() {
	uniName 		= "";
	population		= 0;
	numStudents		= 0;
	numInstructors	= 0;
	numBuildings	= 0;
}

/**************************************************************
*                  University::University
* Description: Constructor function that saves the initial
* information and creates an object out of the name, pop,
* number of students / instructors / buildings.  Allows
* the user to set the name of the school.
**************************************************************/
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
/**************************************************************
*                  University::addStudents
* Description: Adds a new student value into the vector, it
* then increases the population and numstudents variables to
* properly reflect the population
**************************************************************/
void University::addStudent(Student currStudent) {
	studentGroup.push_back(currStudent);
	population++;
	numStudents++;
}

/**************************************************************
*                  University::Instructor
* Description: Adds a new instructor value into the vector, it
* then increases the population and numinstructor variables to
* properly reflect the population
**************************************************************/
void University::addInstructor(Instructor currInstructor) {
	instructorGroup.push_back(currInstructor);
	population++;
	numInstructors++;
}

/**************************************************************
*                  University::addBuilding
* Description: Adds a new building value into the vector, it
* then increases the numbuildings variable to
* properly reflect the number of buildings
**************************************************************/
void University::addBuilding(Building currBuilding) {
	buildingGroup.push_back(currBuilding);
	numBuildings++;
}
/*************************************
 * GETTERS
 *************************************/
/**************************************************************
*                  University::getUniName
* Description: returns string stored in uniName
**************************************************************/
std::string University::getUniName() {
	return uniName;
}

/**************************************************************
*                  University::getPopulation
* Description: returns string stored in population
**************************************************************/
int University::getPopulation() {
	return population;
}

/**************************************************************
*                  University::getNumStudents
* Description: returns string stored in numStudents
**************************************************************/
int University::getNumStudents() {
	return numStudents;
}

/**************************************************************
*                  University::getNumInstructors
* Description: returns string stored in numInstructors
**************************************************************/
int University::getNumInstructors() {
	return numInstructors;
}

/**************************************************************
*                  University::getNumBuildings
* Description: returns string stored in numBuildings
**************************************************************/
int University::getNumBuildings() {
	return numBuildings;
}

/*************************************
 * MEMBER FUNCTIONS
 *************************************/
/**************************************************************
*                  University::printStudentBody
* Description: prints all objects in the student vector in
 * an easy to read format
**************************************************************/
void University::printStudentBody() {
	for (int i = 0; i < studentGroup.size(); i++) {
		studentGroup.at(i).print();
		std::cout << "---------------------" << std::endl;
	}

}

/**************************************************************
*                  University::printInstructorBody
* Description: prints all objects in the instructor vector in
 * an easy to read format
**************************************************************/
void University::printInstructorBody() {
	for (int i = 0; i < instructorGroup.size(); i++) {
		instructorGroup.at(i).print();
		std::cout << "---------------------" << std::endl;
	}
}

/**************************************************************
*                  University::printBuildings
* Description: prints all objects in the building vector in
 * an easy to read format
**************************************************************/
void University::printBuildings() {
	for (int i = 0; i < buildingGroup.size(); i++) {
		buildingGroup.at(i).printBuilding();
		std::cout << "---------------------" << std::endl;
	}
}

/**************************************************************
*                  University::memberSearch
* Description: Searches through all people vectors and checks
* to see if an individual exists, if they do it returns a
* pointer to their location
**************************************************************/
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




