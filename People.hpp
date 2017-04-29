/**************************************************************
 * Author: Neil Johnson
 *
 * Date: 4.30.2017
 *
 * Description: This is the header file for the People class. In
 * here we build the base class for individuals in the program.
 * It is used to save the individuals name, and age, as well
 * as being able to retrieve this information.  We also have
 * virtual functions for the user to do_work methods with
 * other derived classes.
**************************************************************/

#ifndef LAB_4_PEOPLE_HPP
#define LAB_4_PEOPLE_HPP

#include <iostream>

class People {
private:
	std::string name;
	int age;
public:
	// Constructors
	People();
	People(std::string, int);

	// Getters
	std::string getName();
	std::string getName() const;
	int getAge();

	// Setters
	void setName(std::string);
	void setAge(int);

	// Member Functions
	virtual void do_work(int);
	virtual void print();

};


#endif //LAB_4_PEOPLE_HPP
