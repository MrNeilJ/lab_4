/**************************************************************
 * Author: Neil Johnson
 *
 * Date: 4.30.2017
 *
 * Description: This is the main file to the University program.
 * In this program we save information about the school from
 * building information, student info, instructor info, etc,
 * and allow the user of the program to print out information
 * about each of these areas in any easy to read format.
**************************************************************/

#include <iostream>
#include <time.h>
#include "University.hpp"
#include "menuMaker.hpp"
#include "inputCheck.hpp"

int main() {
	// Seeds the random variable to be used later.
	srand(time(NULL));

	// Basic welcome information for the user
	std::cout << "******************************************" << std::endl;
	std::cout << "*         OREGON STATE UNIVERSITY        *" << std::endl;
	std::cout << "******************************************" << std::endl;

	std::cout << "Welcome to the Oregon State University Information System." << std::endl;
	std::cout << "\nHere you can look up various types of campus information and even" << std::endl;
	std::cout << "put some people to work!" << std::endl;

	// Initialize the university object for the program
	University myUniversity("Oregon State University");

	// Student Variables
	myUniversity.addStudent(Student("Neil", 25));
	myUniversity.addStudent(Student("Todd", 26));
	myUniversity.addStudent(Student("Chase", 26));

	// Instructor Info
	myUniversity.addInstructor(Instructor("Mr. Fish", 29));
	myUniversity.addInstructor(Instructor("Mr. Flop", 50));
	myUniversity.addInstructor(Instructor("Mr. Morty", 32));


	// Building Info
	myUniversity.addBuilding(Building("Adams Hall",
									  "27280 Tampico Rd. Corvallis, OR 97330",
									  11168));
	myUniversity.addBuilding(Building("Aero Engineering Lab",
									  "853 SW 30th Street Corvallis, OR 97331",
									  3367));
	myUniversity.addBuilding(Building("Austin Hall",
									  "2751 SW Jefferson Way Corvallis, OR 97331",
									  107613));

	// Main Menu Initialized
	menuMaker welcomeMenu(	"\nWhat would you like to do?",
							"Print out building information.",
							"Print out information of people on campus.",
							"Put somebody to work",
							"Quit");

	int welcomeChoice = 0;
	// Loop through the prompt until the user quits the application
	do {
		welcomeMenu.prompt();
		welcomeChoice = welcomeMenu.getResponse();
		// If the user selects 1, print building information
		if (welcomeChoice == 1) {
			// Building Info
			std::cout << "BUILDING INDEX:" << std::endl;
			std::cout << "-----------------------" << std::endl;
			std::cout << "# of Buildings: " << myUniversity.getNumBuildings() << std::endl;
			std::cout << std::endl;
			myUniversity.printBuildings();

		}
		// If the user selects 2, print campus information
		else if (welcomeChoice == 2) {
			// Population information
			std::cout << "CAMPUS POPULATION:" << std::endl;
			std::cout << "-----------------------" << std::endl;
			std::cout << "Total Population: " << myUniversity.getPopulation() << std::endl;
			std::cout << std::endl;

			// Student Info
			std::cout << "STUDENT BODY:" << std::endl;
			std::cout << "-----------------------" << std::endl;
			std::cout << "# of Students: " << myUniversity.getNumStudents() << std::endl;
			std::cout << std::endl;
			myUniversity.printStudentBody();
			std::cout << std::endl;

			// Instructor Info
			std::cout << "INSTRUCTOR BODY:" << std::endl;
			std::cout << "-----------------------" << std::endl;
			std::cout << "# of Instructors: " << myUniversity.getNumInstructors() << std::endl;
			std::cout << std::endl;
			myUniversity.printInstructorBody();
			std::cout << std::endl;

		}
		// If the user selects 3, ask the user who they want to put to work, and then print it out
		else if (welcomeChoice == 3) {
			std::cout << "Who would you like to put to work" << std::endl;
			std::string worker = getString();

			People* tempWorker = myUniversity.memberSearch(worker);
			if (tempWorker == nullptr) {
				std::cout << "Please try again with a different name" << std::endl;
			}
			else {
				std::cout << "How many hours would you like to ask them to work?" << std::endl;
				std::cout << "Requested # of hours: ";
				int requestedHours = getInt();
				tempWorker->do_work(requestedHours);
				std::cout << std::endl;
			}
			tempWorker = nullptr;
		}
		// If the user wants to quit, say goodbye and end program
		else if (welcomeChoice == 4) {
			std::cout << "Thank you for visiting Oregon State University. Have a great day!" << std::endl;
			return 0;
		}
		// Fail-safe if they type in something that doesn't meet the criteria above
		else {
			std::cout << "I'm sorry, I did not understand that response, try again!" << std::endl;
		}
	} while (welcomeChoice != 4);

	return 0;
};