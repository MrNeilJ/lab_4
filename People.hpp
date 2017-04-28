//
// Created by Neil on 4/28/2017.
//

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
	int getAge();

	// Setters
	void setName(std::string);
	void setAge(int);

	// Member Functions
	void do_work(int);
	virtual void print();
};


#endif //LAB_4_PEOPLE_HPP
