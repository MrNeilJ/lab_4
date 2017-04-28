#include <iostream>
#include "University.hpp"
#include "menuMaker.hpp"
int main() {
	std::cout << "******************************************" << std::endl;
	std::cout << "*         OREGON STATE UNIVERSITY        *" << std::endl;
	std::cout << "******************************************" << std::endl;

	std::cout << "Welcome to the Oregon State University Information System." << std::endl;
	std::cout << "\nHere you can look up various types of campus information and even" << std::endl;
	std::cout << "put some people to work!" << std::endl;

	menuMaker welcomeMenu(	"\nWhat would you like to do?",
							"Print out building information.",
							"Print out information of people on campus.",
							"Put somebody to work",
							"Quit");

	welcomeMenu.prompt();
	int welcomeChoice = welcomeMenu.getResponse();

	University myUniversity("Oregon State University");
	myUniversity.addStudent(Student("Neil", 25, 4.0));
	myUniversity.addStudent(Student("Todd", 26, 3.5));
	myUniversity.addStudent(Student("Chase", 26, 3.0));

	myUniversity.printStudent(0);


	return 0;
}